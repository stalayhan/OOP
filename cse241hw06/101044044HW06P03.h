//============================================================================
// Name        : ComputerProgrmmingTools.h
// Author      : Samet Sait Talayhan
// Version     : 0.001
// Copyright   : The MIT License (MIT)
//
// Description : CSE241_HW3 in C++, Ansi-style
//============================================================================

#ifndef COMPUTERPROGRMMINGTOOLS_H_
#define COMPUTERPROGRMMINGTOOLS_H_

#include "101044044HW06P01.h"

namespace Talayhan {

using std::string;

class ComputerProgrmmingTools: public Talayhan::Software {
public:
	ComputerProgrmmingTools();
	virtual ~ComputerProgrmmingTools();
	static int getAliveObjectNumbers();
	string getName() const;
	void setName(string name);

private:
	string name;
	static int aliveObjectNumbersComp;
};

} /* namespace Talayhan */
#endif /* COMPUTERPROGRMMINGTOOLS_H_ */
