from setuptools import find_packages
from setuptools import setup

setup(
    name='house_interface',
    version='0.0.0',
    packages=find_packages(
        include=('house_interface', 'house_interface.*')),
)
