/* ----------------------------------------------------------------------------

 * GTSAM Copyright 2010, Georgia Tech Research Corporation,
 * Atlanta, Georgia 30332-0415
 * All Rights Reserved
 * Authors: Frank Dellaert, et al. (see THANKS for the full author list)

 * See LICENSE for the license information

 * -------------------------------------------------------------------------- */

/**
 * @file    MatrixConstants.h
 * @brief   Macros for Matrix constants to avoid excessive template
 * instantiation. Avoid using in headers to prevent name pollution.
 * @author  Gold856
 */

#pragma once

#include <gtsam/base/Matrix.h>

#define I_1x1 gtsam::Matrix1::Identity()
#define Z_1x1 gtsam::Matrix1::Constant(0.0)

#define I_2x2 gtsam::Matrix2::Identity()
#define Z_2x2 gtsam::Matrix2::Constant(0.0)

#define I_3x3 gtsam::Matrix3::Identity()
#define Z_3x3 gtsam::Matrix3::Constant(0.0)

#define I_4x4 gtsam::Matrix4::Identity()
#define Z_4x4 gtsam::Matrix4::Constant(0.0)

#define I_5x5 gtsam::Matrix5::Identity()
#define Z_5x5 gtsam::Matrix5::Constant(0.0)

#define I_6x6 gtsam::Matrix6::Identity()
#define Z_6x6 gtsam::Matrix6::Constant(0.0)

#define I_7x7 gtsam::Matrix7::Identity()
#define Z_7x7 gtsam::Matrix7::Constant(0.0)

#define I_8x8 gtsam::Matrix8::Identity()
#define Z_8x8 gtsam::Matrix8::Constant(0.0)

#define I_9x9 gtsam::Matrix9::Identity()
#define Z_9x9 gtsam::Matrix9::Constant(0.0)
