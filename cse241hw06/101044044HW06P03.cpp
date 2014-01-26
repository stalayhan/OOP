//============================================================================
// Name        : ComputerProgrmmingTools.cpp
// Author      : Samet Sait Talayhan
// Version     : 0.001
// Copyright   : The MIT License (MIT)
//
// Description : CSE241_HW3 in C++, Ansi-style
//============================================================================

#include "101044044HW06P03.h"

namespace Talayhan {

ComputerProgrmmingTools::ComputerProgrmmingTools() {
	// TODO Auto-generated constructor stub
	++aliveObjectNumbersComp;
}

ComputerProgrmmingTools::~ComputerProgrmmingTools() {
	// TODO Auto-generated destructor stub
	--aliveObjectNumbersComp;
}

int ComputerProgrmmingTools::getAliveObjectNumbers() {
	return aliveObjectNumbersComp;
}

string ComputerProgrmmingTools::getName() const {
	return name;
}

void ComputerProgrmmingTools::setName(string name) {
	this->name = name;
}

} /* namespace Talayhan */
