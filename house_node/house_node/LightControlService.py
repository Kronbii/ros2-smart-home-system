import rclpy
import time
from rclpy.node import Node
from house_interface.srv import LightState
from house_interface.msg import LightStateMsg
from house_interface.action import DimLight
from house_interface.msg import AmbientLight
from rclpy.action import ActionServer, GoalResponse

#TODO: check for light level before dimming
#TODO: make light level float

class LightControlService(Node):

    def __init__(self):
        super().__init__('light_control_node')
        self._counter = 0

        self.subscriber = self.create_subscription(LightStateMsg, 'Light_state', self.callback_light_state, 100)
        self.srv = self.create_service(LightState, 'light_state_change', self.callback_set_light_state)
        self.action_server = ActionServer(
            self,
            DimLight,
            'dim_light',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback
        )
        self.light_state_msg = 'on'
        self.current_light_level = float(0) #TODO make random
        self.current_light_level = round(self.current_light_level, 1)
        self.get_logger().info('Light Panel node Initialized!')

    def callback_light_state(self, msg: LightStateMsg):
        self.get_logger().info(f"Received: {msg.light_state_msg}")
    
    def callback_set_light_state(self, request, response):
        self.light_state_msg = request.light_state
        response.success = True
        response.message = f'Light State Set To: {str(self.light_state_msg)}'
        self.publish_light_state()
        return response

    def publish_light_state(self):
        msg = LightStateMsg()
        msg.light_state_msg = f'Light is {str(self.light_state_msg)}'
        self.publisher_ = self.create_publisher(LightStateMsg, 'Light_state', 100)
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing: {msg.light_state_msg}')
    
    def goal_callback(self, goal_request):
        self.get_logger().info("Received goal request to adjust light")
        if self.light_state_msg == 'off':
            self.get_logger().info("\033[91mLight is off, rejecting light change request\033[91m")
            return GoalResponse.REJECT
        else:
            return GoalResponse.ACCEPT
    
    def execute_callback(self, goal_handle):
        target_level = goal_handle.request.target_light_level
        self.get_logger().info(f'Starting to adjust light level to {target_level}')
        target_level = float(target_level)

        feedback_msg = DimLight.Feedback()
        result = DimLight.Result()


        self.current_light_level = round(self.current_light_level ,1)
        target_level = round(target_level, 1)
        while self.current_light_level != target_level:
            if self.current_light_level < target_level:
                self.current_light_level += 0.1
            elif self.current_light_level > target_level:
                self.current_light_level -= 0.1
            self.current_light_level = round(self.current_light_level ,1)
            feedback_msg.current_light_level = round(self.current_light_level,1)
            self.get_logger().info(f'\033[31m[FDB]\033[31m current light level is {self.current_light_level}')
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(0.01)
        self._counter += 1
        self.get_logger().info(f'\033[92m[INFO]\033[92m Light level reached {self._counter}: {target_level}')
        result.reached_light_level = self.current_light_level
        goal_handle.succeed()
        return result

def main():
    rclpy.init()
    light_control_obj = LightControlService()
    rclpy.spin(light_control_obj)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
