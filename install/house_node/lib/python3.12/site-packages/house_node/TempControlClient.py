import sys
import rclpy
from rclpy.node import Node
from house_interface.srv import SetTemp

#TODO: make message dipslay on and off instead of true and

class TempControlClient(Node):

    def __init__(self):
        super().__init__('temp_control_client')
        self.cli = self.create_client(SetTemp, 'temp_state_change')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('\033[91mService not available, waiting again...\033[91m')
        self.req = SetTemp.Request()

    def send_request(self, temp_state):
        self.req.temp_state = temp_state
        return self.cli.call_async(self.req)


def main():
    rclpy.init()

    temp_control_obj = TempControlClient()  # Fixed class name typo
    rami = str(sys.argv[1])
    rami = rami.strip().lower() == 'on'
    future = temp_control_obj.send_request(rami)
    rclpy.spin_until_future_complete(temp_control_obj, future)  # Wait until the request is complete

    try:
        response = future.result()
        temp_control_obj.get_logger().info(f'\033[92mOperation Success: {response.success}\033[92m')
        temp_control_obj.get_logger().info(response.message)
    except Exception as e:
        temp_control_obj.get_logger().error(f'\033[91mFailed to get response: {str(e)}\033[91m')

    temp_control_obj.destroy_node()  # Fixed node name
    rclpy.shutdown()


if __name__ == '__main__':
    main()
