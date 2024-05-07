from setuptools import find_packages, setup

package_name = 'py_pubsub'

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
    maintainer='Joseph Loeffler',
    maintainer_email='jwl72@drexel.edu',
    description='ROS Testing',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'talker = py_pubsub.pubserial:main',
            # 'listener = py_pubsub.subscriber_member_function:main',
            'listener = py_pubsub.driver:main',
            #'driver = folder_name.filename:function',
                #If we run ros2 run py_pubsub driver, it will execute driver.py
        ],
    },
)
