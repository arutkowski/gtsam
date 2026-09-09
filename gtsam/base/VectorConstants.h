/* ----------------------------------------------------------------------------

 * GTSAM Copyright 2010, Georgia Tech Research Corporation,
 * Atlanta, Georgia 30332-0415
 * All Rights Reserved
 * Authors: Frank Dellaert, et al. (see THANKS for the full author list)

 * See LICENSE for the license information

 * -------------------------------------------------------------------------- */

/**
 * @file    VectorConstants.h
 * @brief   Macros for Vector constants to avoid excessive template
 * instantiation. Avoid using in headers to prevent name pollution.
 * @author  Gold856
 */

#pragma once

#include <gtsam/base/Vector.h>

#define Z_2x1 gtsam::Vector2::Constant(0.0)
#define Z_3x1 gtsam::Vector3::Constant(0.0)
#define Z_4x1 gtsam::Vector4::Constant(0.0)
#define Z_5x1 gtsam::Vector5::Constant(0.0)
#define Z_6x1 gtsam::Vector6::Constant(0.0)
#define Z_7x1 gtsam::Vector7::Constant(0.0)
#define Z_8x1 gtsam::Vector8::Constant(0.0)
#define Z_9x1 gtsam::Vector9::Constant(0.0)
