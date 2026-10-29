# F1 Pit Stop: Robot Sim
For CS4048 group project.

Made by Kayma's bullies.

## Project Summary
Description.

## Opening Gazebo
To open your F1 Gazebo simulator in your Ubuntu VM, run:
> cd project_folder

> gz sim src/folder/folder/file-name.sdf

To open Gazebo with the project:
> gz sim
set up before run: 
source /opt/ros/jazzy/setup.bash
export GZ_SIM_RESOURCE_PATH=$GZ_SIM_RESOURCE_PATH:$(pwd)/models

to run: 
gz sim worlds/nicetrack.sdf --render-engine ogre

to run unpaused: 
gz sim -r worlds/nicetrack.sdf --render-engine ogre
 

