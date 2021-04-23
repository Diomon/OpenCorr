/*
 * This file is part of OpenCorr, an open source C++ library for
 * study and development of 2D, 3D/stereo and volumetric
 * digital image correlation.
 *
 * Copyright (C) 2021, Zhenyu Jiang <zhenyujiang@scut.edu.cn>
 *
 * This Source Code Form is subject to the terms of the Mozilla
 * Public License v. 2.0. If a copy of the MPL was not distributed
 * with this file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * More information about OpenCorr can be found at https://www.opencorr.org/
 */

#include "oc_poi.h"

namespace opencorr
{

	POI2D::POI2D(int x, int y) :Point2D(x, y) {
		clean();
	}

	POI2D::POI2D(float x, float y) : Point2D(x, y) {
		clean();
	}

	POI2D::POI2D(Point2D location) : Point2D(location) {
		clean();
	}

	POI2D::~POI2D() {
	}

	void POI2D::clean() {
		std::fill(std::begin(this->deformation.p), std::end(this->deformation.p), 0.f);
		std::fill(std::begin(this->result.r), std::end(this->result.r), 0.f);
	}

	void POI2D::setIterationCriteria(float convergence_criterion, float stop_condition, float neighbor_essential) {
		this->result.convergence = convergence_criterion;
		this->result.iteration = (float)stop_condition;
		this->result.feature = (float)neighbor_essential;
	}

	//POI3D//////////////////////////////////////////////////////////////////////////
	POI3D::POI3D(int x, int y, int z) :Point3D(x, y, z) {
		clean();
	}

	POI3D::POI3D(float x, float y, float z) : Point3D(x, y, z) {
		clean();
	}

	POI3D::POI3D(Point3D location) : Point3D(location) {
		clean();
	}

	POI3D::~POI3D() {
	}

	void POI3D::clean() {
		std::fill(std::begin(this->deformation.p), std::end(this->deformation.p), 0.f);
		std::fill(std::begin(this->result.r), std::end(this->result.r), 0.f);
	}

}//namespace opencorr