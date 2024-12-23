import sys
import rclpy
from rclpy.node import Node
from house_interface.srv import LightState

class LightControlClient(Node):

    def __init__(self):
        super().__init__('light_control_client')
        self.cli = self.create_client(LightState, 'light_state_change')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('\033[91mService not available, waiting again...\033[91m')
        self.req = LightState.Request()

    def send_request(self, light_state):
        self.req.light_state = light_state
        return self.cli.call_async(self.req)


def main():
    rclpy.init()

    light_control_obj = LightControlClient() 
    future = light_control_obj.send_request(str(sys.argv[1]))
    rclpy.spin_until_future_complete(light_control_obj, future)

    try:
        response = future.result()
        light_control_obj.get_logger().info(f'\033[92mOperation Success:\033[92m {response.success}')
        light_control_obj.get_logger().info(response.message)
    except Exception as e:
        light_control_obj.get_logger().error(f'\033[91mFailed to get response: {str(e)}\033[91m')

    light_control_obj.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
