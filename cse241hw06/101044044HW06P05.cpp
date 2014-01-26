//============================================================================
// Name        : Firmware.cpp
// Author      : Samet Sait Talayhan
// Version     : 0.001
// Copyright   : The MIT License (MIT)
//
// Description : CSE241_HW3 in C++, Ansi-style
//============================================================================

#include "101044044HW06P05.h"

namespace Talayhan {

Firmware::Firmware() {
	// TODO Auto-generated constructor stub
	++aliveObjectNumbersFirmware;
}

Firmware::~Firmware() {
	// TODO Auto-generated destructor stub
	--aliveObjectNumbersFirmware;
}

 int Firmware::getAliveObjectNumbers() {
	return aliveObjectNumbersFirmware;
}

string Firmware::getName() const {
	return name;
}

void Firmware::setName(string name) {
	this->name = name;
}

} /* namespace Talayhan */
