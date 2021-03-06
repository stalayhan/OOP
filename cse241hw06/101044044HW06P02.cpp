//============================================================================
// Name        : SystemSoftware.cpp
// Author      : Samet Sait Talayhan
// Version     : 0.001
// Copyright   : The MIT License (MIT)
//
// Description : CSE241_HW3 in C++, Ansi-style
//============================================================================

#include "101044044HW06P02.h"

namespace Talayhan {

SystemSoftware::SystemSoftware() {
	// TODO Auto-generated constructor stub
	++aliveObjectNumbersSystem;
}

SystemSoftware::~SystemSoftware() {
	// TODO Auto-generated destructor stub
	--aliveObjectNumbersSystem;
}

 int SystemSoftware::getAliveObjectNumbers() {
	return aliveObjectNumbersSystem;
}

const string& SystemSoftware::getName() const {
	return name;
}

void SystemSoftware::setName(const string& name) {
	this->name = name;
}

} /* namespace Talayhan */
