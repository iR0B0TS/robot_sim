from setuptools import find_packages
from setuptools import setup

setup(
    name='warehouse_pick_place_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('warehouse_pick_place_interfaces', 'warehouse_pick_place_interfaces.*')),
)
