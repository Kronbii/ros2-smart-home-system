import rclpy
import random
from rclpy.node import Node
from house_interface.msg import SecurityStateMsg
from house_interface.msg import MotionDetect

class securityControlService(Node):

    def __init__(self):
        super().__init__('security_control_node')

        self.state_subscriber = self.create_subscription(SecurityStateMsg, 'security_state_change', self.callback_security_state, 100)
        self.motion_subscriber = self.create_subscription(MotionDetect, 'motion_detect', self.callback_motion_state, 100)
    
        self.get_logger().info('Security Panel node Initialized!')

    def callback_security_state(self, msg: SecurityStateMsg):
        self.security_state_msg = msg.security_state_msg
        self.get_logger().info(f"Received: {msg.security_state_msg}")
    
    def callback_motion_state(self, msg: MotionDetect):
        if self.security_state_msg.upper() == 'ARM':
            self.motion_state = msg.motion
            if self.motion_state:
                self.get_logger().info("\033[91mALARM!!!! BATMAN DETECTED\033[91m")
            else:
                self.get_logger().info("\033[92mNo Motion Detected\033[92m")

def main():
    rclpy.init()
    security_control_obj = securityControlService()
    rclpy.spin(security_control_obj)
    security_control_obj.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
