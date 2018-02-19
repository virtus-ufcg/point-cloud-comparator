/*
 * visualizer.h
 *
 *  Created on: 20 may. 2017
 *      Author: Adrian Arroyo adr.arroyo.perez@gmail.com
 */

#ifndef INCLUDE_VISUA_H_
#define INCLUDE_VISUA_H_

#include <iostream>

#include <~/pcl/io/include/pcl/io/pcd_io.h>
#include <~/pcl/io/include/pcl/io/ply_io.h>
#include <~/pcl/common/include/pcl/point_cloud.h>
#include <~/pcl/common/include/pcl/console/parse.h>
#include <~/pcl/common/include/pcl/common/transforms.h>
#include <~/pcl/visualization/include/pcl/visualization/pcl_visualizer.h>
#include <~/pcl/visualization/include/pcl/visualization/point_cloud_color_handlers.h>
#include <boost/thread/thread.hpp>
#include <~/pcl/common/include/pcl/common/common_headers.h>
#include <~/pcl/features/include/pcl/features/normal_3d.h>
#include <~/pcl/common/include/pcl/range_image/range_image.h>
#include <~/pcl/features/include/pcl/features/range_image_border_extractor.h>
#include <~/pcl/keypoints/include/pcl/keypoints/narf_keypoint.h>

namespace pcl {
namespace PointCloudComparator {
}
}

#endif /* INCLUDE_VISUA_H_ */
