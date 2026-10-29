# F1 Pit Stop: Robot Sim
For CS4048 group project.

Made by Kayma's bullies.

## Project Summary
Description.

## Opening Gazebo & running project
To open your F1 Gazebo simulator in your Ubuntu VM, run:

```cd project_folder```

```gz sim src/folder/folder/file-name.sdf```

To open Gazebo with the project:

gz sim set up: 

```source /opt/ros/jazzy/setup.bash```

Then run this so it knows where the models are:
 
```export GZ_SIM_RESOURCE_PATH=$GZ_SIM_RESOURCE_PATH:$(pwd)/models```

To run gz sim (pre paused): 
```gz sim worlds/nicetrack.sdf --render-engine ogre```

To run gz sim : 
```gz sim -r worlds/nicetrack.sdf --render-engine ogre```
 

