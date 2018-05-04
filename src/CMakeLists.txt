cmake_minimum_required(VERSION 3.0)

project(PointCloudComparator)

find_package(PCL 1.8 REQUIRED COMPONENTS common io)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_library(mylib SHARED segmentation.cpp comparator.cpp)

add_executable (segmentator segmentation.cpp)
target_link_libraries (segmentator mylib ${PCL_LIBRARIES} ${VTK_LIBRARIES} ${PCL_COMMON_LIBRARIES} ${PCL_IO_LIBRARIES})

add_executable (comparator comparator.cpp)
target_link_libraries (comparator mylib ${PCL_LIBRARIES} ${VTK_LIBRARIES} ${PCL_COMMON_LIBRARIES} ${PCL_IO_LIBRARIES})
