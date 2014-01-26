//============================================================================
// Name        : Software.cpp
// Author      : Samet Sait Talayhan
// Version     : 0.001
// Copyright   : The MIT License (MIT)
//
// Description : CSE241_HW3 in C++, Ansi-style
//============================================================================

#include "101044044HW06P01.h"

namespace Talayhan {

Software::Software() {
	// TODO Auto-generated constructor stub
	++aliveObjectNumberSoftware;
}

Software::~Software() {
	// TODO Auto-generated destructor stub
	--aliveObjectNumberSoftware;
}

int Software::getAliveObjectNumber() {
	return aliveObjectNumberSoftware;
}

const string& Software::getName() const {
	return name;
}

void Software::setName(const string& name) {
	this->name = name;
}

} /* namespace Talayhan */
