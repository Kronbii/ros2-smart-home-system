from setuptools import find_packages, setup

package_name = 'house_node'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='daaboul',
    maintainer_email='daaboul@todo.todo',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'light_control_service = house_node.LightControlService:main',
            'switch_light = house_node.LightControlClient:main',
            'auto_light_control = house_node.LightActionClient:main',
            'temp_control_service = house_node.TempControlService:main',
            'switch_thermo = house_node.TempControlClient:main',
            'auto_temp_control = house_node.TempActionClient:main',
            'security_switch = house_node.SecurityControlPub:main',
            'auto_security_control = house_node.SecurityControlService:main',
        ]
    },
)
