//============================================================================
// Name        : LegalSoftware.cpp
// Author      : Samet Sait Talayhan
// Version     : 0.001
// Copyright   : The MIT License (MIT)
//
// Description : CSE241_HW3 in C++, Ansi-style
//============================================================================

#include "101044044HW06P08.h"

namespace Talayhan {

LegalSoftware::LegalSoftware() {
	// TODO Auto-generated constructor stub
	++aliveObjectNumbersLegal;
}

LegalSoftware::~LegalSoftware() {
	// TODO Auto-generated destructor stub
	--aliveObjectNumbersLegal;
}

int LegalSoftware::getAliveObjectNumbers() {
	return aliveObjectNumbersLegal;
}

const string& LegalSoftware::getName() const {
	return name;
}

void LegalSoftware::setName(const string& name) {
	this->name = name;
}

} /* namespace Talayhan */
