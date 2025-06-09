# ROS2 Smart Home System 🏠🤖

A **ROS 2**-based smart home automation platform that integrates C++ and Python nodes for tasks like computer vision, IoT control, and system orchestration.

## 🚀 Features

* **C++ Vision Nodes (using OpenCV / MediaPipe)**

  * Object detection
  * Live camera feeds
* **Python Automation Nodes**

  * Publish-subscribe logic
  * Simple behavior and state management
* **Mixed-language build**

  * C++ ⬌ Python integration via `colcon` and `ament_cmake` + `ament_python`
* **IoT & actuator integrations**

  * Arduino & Raspberry Pi control via ROS 2 topics/services

## 📁 Repository Structure

```text
.
├── CMakeLists.txt            # CMake build config for C++ nodes
├── setup.py                  # Python package setup for ROS 2
├── package.xml               # ROS 2 package manifest
├── include/                  # Header files for C++ nodes
├── src/                      # C++ source files
├── scripts/                  # Python ROS 2 nodes
└── launch/                   # ROS 2 launch files
```

## 🔧 Requirements

* ROS 2 Humble (or later)
* colcon build tools
* C++17 toolchain (e.g., GCC 9+, Clang)
* Python 3.8+
* OpenCV, MediaPipe (or similar for vision modules)

## 🛠️ Build & Install

Run the following within your ROS 2 workspace:

```bash
cd <ros2_ws>
colcon build --packages-select ros2-smart-home-system
source install/setup.bash
```

## ▶️ Run Nodes

### Vision (C++):

```bash
ros2 run ros2_smart_home_system <vision_node_name>
```

### Automation (Python):

```bash
ros2 run ros2_smart_home_system <python_node_name>
```

### Run via Launch File:

```bash
ros2 launch ros2_smart_home_system main_launch.py
```

## ⚙️ Usage

1. Launch system via provided launch file.
2. Use `rviz2` or `rqt_image_view` for visual feedback from C++ vision nodes.
3. Send commands using ROS topics or services to interact with Python automation nodes.
4. Use existing interface (web, GUI, MQTT, etc.) to monitor system or toggle behaviors.

## 💡 Adding a New Node

### C++ Node:

1. Add `.cpp` file to `src/`
2. Include relevant header in `include/`
3. Update `CMakeLists.txt`:

```cmake
add_executable(my_cpp_node src/my_cpp_node.cpp)
ament_target_dependencies(my_cpp_node rclcpp <other_deps>)
install(TARGETS my_cpp_node DESTINATION lib/${PROJECT_NAME})
```

4. Rebuild:

```bash
colcon build --packages-select ros2-smart-home-system
```

### Python Node:

1. Add script to `scripts/` and make it executable
2. Register entry point in `setup.py`:

```python
entry_points={
    'console_scripts': [
        'my_py_node = ros2_smart_home_system.my_py_node:main',
    ],
}
```

3. Rebuild workspace.

## 🧪 Testing

*Currently placeholder — include a test suite using `launch_testing` or `pytest` with ROS 2 test runners.*

## 📦 Dependencies

* `ament_cmake`, `ament_python`, `rclcpp`, `rclpy`, `sensor_msgs`, `std_msgs`, `OpenCV`, `MediaPipe`, etc.

Ensure dependencies are declared correctly in `package.xml`.

## 📖 Documentation & Resources

* [ROS 2 Tutorials](https://docs.ros.org/en/rolling/tutorials.html)
* [Colcon Build System](https://docs.ros.org/en/rolling/Installation/Developer-Guide/Colcon.html)
* [OpenCV](https://opencv.org)
* [MediaPipe](https://mediapipe.dev)

## 🧑‍💻 Contributing

Contributions are welcome!
Please open PRs for enhancements, bug fixes, or new hardware integrations.

## 📝 License

This project is licensed under the **MIT License** — see [LICENSE](LICENSE) for details.

## 🔗 Acknowledgments

* Inspired by [OASIS Smart Home](https://github.com/eigendude/OASIS)
* Built with ROS 2 best practices from the official documentation
