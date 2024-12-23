import rclpy
import time
import random
from rclpy.action import ActionClient
from rclpy.node import Node
from house_interface.action import RegulateTemp

class TempRegulateActionClient(Node):
    def __init__(self):
        super().__init__('regulate_temperature')
        self.action_client = ActionClient(self, RegulateTemp, 'regulate_temp')

    def send_goal(self, temp_level):
        goal_msg = RegulateTemp.Goal()
        goal_msg.target_temp_level = temp_level
        self.action_client.wait_for_server()
        self.send_goal_future = self.action_client.send_goal_async(
            goal_msg, feedback_callback = self.feedback_callback) #TODO define callback
        self.send_goal_future.add_done_callback(self.goal_response_callback)
    
    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted: #TODO might cause errors since its lower case
            self.get_logger().info('\033[91mGoal rejected :(\033[91m') #TODO change later
            return
        self.get_logger().info('Goal Accepted :)') #TODO change later
        self.get_result_future = goal_handle.get_result_async()
        self.get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future): #TODO check if future is correct
        result = future.result().result
        self.get_logger().info(f'\033[92m[INFO]\033[92m Temp Level: {result.reached_temp_level}')
        rclpy.shutdown()
    
    def feedback_callback(self, feedback_msg): #TODO check if feedback_msg is correct
        feedback = feedback_msg.feedback
        self.get_logger().info(f'\033[92m[INFO]\033[92m Current Temp Level: {round(feedback.current_temp_level, 1)}')

        

def main(args=None):
    while True:
        rami = random.randint(0,100)
        rclpy.init(args=args)
        action_client = TempRegulateActionClient()
        action_client.send_goal(round(float(rami), 0))
        rclpy.spin(action_client)
        time.sleep(3)

if __name__ == '__main__':
    main()