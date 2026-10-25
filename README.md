# F1 Pit Stop: Robot Sim
For CS4048 group project.

Made by Kayma's bullies.

## Project Summary
Description.

## Opening Gazebo
To open your F1 Gazebo simulator in your Ubuntu VM, run:
> cd project_folder

> gz sim src/folder/folder/file-name.sdf

To open Gazebo without a specific project:
> gz sim

## Running shell scripts
First use this having navigated to the folder:
> chmod +x script_name.sh

Then run either by double-clicking or simply:
> ./run_world.sh

## Actually seeing the pitstop
You need to adjust the path of where the .sdf file points to, find the line:
> file:///home/a/Downloads/pitstop.glb

And adjust it to where-ever you have put it.

I used this (Creative Commons licensed) pitstop: https://sketchfab.com/3d-models/red-bull-f1-garage-086dda7566f64c6c930354687e2ec274