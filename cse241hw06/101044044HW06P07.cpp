//============================================================================
// Name        : EditingSoftware.cpp
// Author      : Samet Sait Talayhan
// Version     : 0.001
// Copyright   : The MIT License (MIT)
//
// Description : CSE241_HW3 in C++, Ansi-style
//============================================================================

#include "101044044HW06P07.h"

namespace Talayhan {

EditingSoftware::EditingSoftware() {
	// TODO Auto-generated constructor stub
	++aliveObjectNumbersEdit;
}

EditingSoftware::~EditingSoftware() {
	// TODO Auto-generated destructor stub
	--aliveObjectNumbersEdit;
}

int EditingSoftware::getAliveObjectNumbers() {
	return aliveObjectNumbersEdit;
}

const string& EditingSoftware::getName() const {
	return name;
}

void EditingSoftware::setName(const string& name) {
	this->name = name;
}

} /* namespace Talayhan */
