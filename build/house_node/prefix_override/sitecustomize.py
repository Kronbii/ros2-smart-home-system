import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/kronbii/github-repos/ROS2-Smart-Home-System/install/house_node'
