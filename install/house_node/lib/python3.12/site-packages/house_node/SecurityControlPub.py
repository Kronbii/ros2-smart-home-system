import random
import sys
import rclpy
from rclpy.node import Node
from house_interface.msg import SecurityStateMsg
from house_interface.msg import MotionDetect

class SecurityControlClient(Node):

    def __init__(self):
        super().__init__('Security_control_client')
        self.state_publisher = self.create_publisher(SecurityStateMsg, 'security_state_change', 100)
        self.motion_publisher = self.create_publisher(MotionDetect, 'motion_detect', 100)
        timer_period = 0.5
        self.timer = self.create_timer(timer_period, self.publish_callback)

    def set_security_state(self, new_sec_state):
        self.new_sec_state = new_sec_state
        return self.new_sec_state
    
    def publish_callback(self):
        msg1 = SecurityStateMsg()
        msg2 = MotionDetect()
        msg1.security_state_msg = self.new_sec_state.upper()

        if msg1.security_state_msg == 'ARM':
            msg2.motion = random.choice([True, False])
        else:
            msg2.motion = False
        self.state_publisher.publish(msg1)
        self.motion_publisher.publish(msg2)
        self.get_logger().info(f"Publishing: {self.new_sec_state}")
        if msg2.motion:
            self.get_logger().info('Publishing: Motion Detected')
        else:
            self.get_logger().info('Publishing: No Motion Detected')


def main():
    rclpy.init()
    security_control_obj = SecurityControlClient()  # Fixed class name typo
    rami = str(sys.argv[1])
    security_control_obj.set_security_state(rami.strip().upper())
    rclpy.spin(security_control_obj)
    security_control_obj.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
