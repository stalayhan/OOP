//============================================================================
// Name        : Compilers.cpp
// Author      : Samet Sait Talayhan
// Version     : 0.001
// Copyright   : The MIT License (MIT)
//
// Description : CSE241_HW3 in C++, Ansi-style
//============================================================================

#include "101044044HW06P06.h"

namespace Talayhan {

Compilers::Compilers() {
	// TODO Auto-generated constructor stub
	++aliveObjectNumbersComp;
}

Compilers::~Compilers() {
	// TODO Auto-generated destructor stub
	--aliveObjectNumbersComp;
}

int Compilers::getAliveObjectNumbers() {
	return aliveObjectNumbersComp;
}

const string& Compilers::getName() const {
	return name;
}

void Compilers::setName(const string& name) {
	this->name = name;
}

} /* namespace Talayhan */
