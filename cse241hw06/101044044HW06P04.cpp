//============================================================================
// Name        : ApplicationSoftware.cpp
// Author      : Samet Sait Talayhan
// Version     : 0.001
// Copyright   : The MIT License (MIT)
//
// Description : CSE241_HW3 in C++, Ansi-style
//============================================================================

#include "101044044HW06P04.h"

namespace Talayhan {

ApplicationSoftware::ApplicationSoftware() {
	// TODO Auto-generated constructor stub
	++aliveObjectNumberApp;

}

ApplicationSoftware::~ApplicationSoftware() {
	// TODO Auto-generated destructor stub
	--aliveObjectNumberApp;
}

int ApplicationSoftware::getAliveObjectNumber() {
	return aliveObjectNumberApp;
}

const string& ApplicationSoftware::getName() const {
	return name;
}

void ApplicationSoftware::setName(const string& name) {
	this->name = name;
}

} /* namespace Talayhan */
