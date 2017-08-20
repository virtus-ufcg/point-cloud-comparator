# Point Cloud Comparator

### Author 
⋅⋅* Adrián Arroyo Pérez

### Supervisors
⋅⋅* [Marc Morenza](https://www.upf.edu/es/web/etic/entry/-/-/97756/409/marc-morenza)
⋅⋅* [Victor Casamayor](https://www.upf.edu/es/web/etic/entry/-/-/116031/409/victor-casamayor)

## General information

**This programm was developed for the master thesis "3D maps and knowledge extraction" of UPF's master in Intelligent Interactive Systems**

This package uses: ![PCL library](https://camo.githubusercontent.com/c8266018fd97329ae5c49cd659ec2a8aab34600b/687474703a2f2f6e7335302e706f696e74636c6f7564732e6f72672f6173736574732f696d616765732f636f6e74656e74732f6c6f676f732f70636c2f70636c5f686f727a5f6c617267655f706f732e706e67 =250x)

This software will compare two input pointclouds, providing with some metrics about their relationship. Number of points, descriptors, noise and number of elements based on color differences are the current metrics. 
The program finds matches of clusters between each point cloud and then compares those matches, it also shows each of the cluster of each match on screen. Additionally, there is a "results.txt" file in "./build" in which appears the information of the segments along with the results of the comparison of each match. At the end of the file there is a "score"; the point cloud with higher score is the one that has more information according to the current metrics.


## Installation

In order to build this program, it would be necessary to have already installed the [PCL library](http://pointclouds.org/) along with their third party libraries if necessary. The version used here is 1.7. 
After the installation of the library, you need to modify the CMakeLists.txt with your own paths.
Once done, run from "./build" the command "cmake ..", which will tell you if there is a problem with CMakeLists.txt. If there is no error, you can run from "./build" the command "make" and it will compile the code and create the executable "comparator".


## How to use it

**PLEASE BE AWARE THAT THIS IS EARLY DEVELOPMENT.**

In order to use it, you will run "./comparator /PathToPointCloud1 /PathToPointCloud2" from "./build". By default, the visualization of the clusters and the matches is off, you can run with "-v": "./comparator -v /PathToPointCloud1 /PathToPointCloud2" from "./build" if you want it active. Similarly, by default noise analysis is disabled as it takes quite more time. If you want to run with it then run with "-n": "./comparator -n /PathToPointCloud1 /PathToPointCloud2" from "./build". You might run as well both "-n -v". Help is also available with "-h".
Other options are -e to select euclidean cluster segmentation as main segmentation algorithm and -i to perform ICP before the point clouds comparison to check if they are comparable enough.
If you activated the visualizer, IN ORDER TO EXIT THE VISUALIZER PRESS "Q". The programm will output how it is doing on the command line. If it has found a match between both point clouds, they will appear if you activated visualization. You need to press "Q" again for the programm to continue for each viewer.
All results will appear in the file "results.txt".
