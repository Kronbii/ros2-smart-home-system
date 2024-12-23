import rclpy
import time
from rclpy.node import Node
from house_interface.srv import SetTemp
from house_interface.msg import TempStateMsg
from house_interface.action import RegulateTemp
from rclpy.action import ActionServer, GoalResponse

#TODO: make temp temp float

class TempControlService(Node):

    def __init__(self):
        super().__init__('temp_control_node')

        self.subscriber = self.create_subscription(TempStateMsg, 'temp_state', self.callback_temp_state, 10)
        self.srv = self.create_service(SetTemp, 'temp_state_change', self.callback_set_temp_state)
        self.action_server = ActionServer(
            self,
            RegulateTemp,
            'regulate_temp',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback
        )
        self.temp_state_msg = 'on'
        self.current_temp_level = float(0) #TODO make random
        self.current_temp_level = round(self.current_temp_level, 1)
        self.get_logger().info('Temperature Panel node Initialized!')

    def callback_temp_state(self, msg: TempStateMsg):
        self.get_logger().info(f"Received: {msg.temp_state_msg}")
    
    def callback_set_temp_state(self, request, response):
        self.temp_state_msg = request.temp_state
        response.success = True
        if self.temp_state_msg:
            response.message = f'Thermostat State Set To On'
        else:
            response.message = f'Thermostat State Set To Off'
        self.publish_temp_state()
        return response

    def publish_temp_state(self):
        msg = TempStateMsg()
        if self.temp_state_msg:
            msg.temp_state_msg = f'Thermostat State Set To On'
        else:
            msg.temp_state_msg = f'Thermostat State Set To Off'
        self.publisher_ = self.create_publisher(TempStateMsg, 'temp_state', 10)
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing: {msg.temp_state_msg}')
    
    def goal_callback(self, goal_request):
        self.get_logger().info("Received goal request to adjust temp")
        if not self.temp_state_msg:
            self.get_logger().info("\033[91mThermostat is off, rejecting temp change request\033[91m")
            return GoalResponse.REJECT
        else:
            return GoalResponse.ACCEPT
    
    def execute_callback(self, goal_handle):
        target_level = goal_handle.request.target_temp_level
        self.get_logger().info(f'Starting to adjust temp level to {target_level}')
        target_level = float(target_level)

        feedback_msg = RegulateTemp.Feedback()
        result = RegulateTemp.Result()


        self.current_temp_level = round(self.current_temp_level ,1)
        target_level = round(target_level, 1)
        while self.current_temp_level != target_level:
            if self.current_temp_level < target_level:
                self.current_temp_level += 0.1
            elif self.current_temp_level > target_level:
                self.current_temp_level -= 0.1
            self.current_temp_level = round(self.current_temp_level ,1)
            feedback_msg.current_temp_level = round(self.current_temp_level,1)
            self.get_logger().info(f'\033[91m[FDB]\033[91m current temp level is {self.current_temp_level}')
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(0.0001)
    
        self.get_logger().info(f'\033[92m[INFO]\033[92m temp level reached: {target_level}')
        result.reached_temp_level = self.current_temp_level
        goal_handle.succeed()
        return result

def main():
    rclpy.init()
    temp_control_obj = TempControlService()
    rclpy.spin(temp_control_obj)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
