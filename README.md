ros-drivers-um7
===============

## install some necessary libraries

Set the IMU sensor first.

Then:

```
cd YOUR_ROS_WORKSPACE_SRC/um7/scripts
chmod+x install.sh set.sh
sudo ./install.sh
```

## Run
```
cd YOUR_ROS_WORKSPACE_SRC/um7/scripts
sudo ./set.sh
```
Some parameters can be changed in the launch file, and 
```
roslaunch um7 um7.launch
```

## How to set the IMU sensor 

* Download the software [CHR Serial Interface](http://www.chrobotics.com/shop/um7-lt-orientation-sensor)

* Install 

* Connect via the serial Interface to configure the UM7:

<img src="docs/line2.jpg">

<img src="docs/line2.jpg">

<img src="docs/line2.jpg">

ROS driver for the CH Robotics UM7 inertial measurement device.
Supports standard data and mag topics as well as providing temperature and rpy outputs.
  See the ROS wiki for details:  http://wiki.ros.org/um7
