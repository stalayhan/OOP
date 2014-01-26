//============================================================================
// Name        : SystemSoftware.h
// Author      : Samet Sait Talayhan
// Version     : 0.001
// Copyright   : The MIT License (MIT)
//
// Description : CSE241_HW3 in C++, Ansi-style
//============================================================================

#ifndef SYSTEMSOFTWARE_H_
#define SYSTEMSOFTWARE_H_

#include "101044044HW06P01.h"

namespace Talayhan {

class SystemSoftware: public Talayhan::Software {
public:
	SystemSoftware();
	virtual ~SystemSoftware();
	static int getAliveObjectNumbers();
	const string& getName() const;
	void setName(const string& name);

private:
	string name;
	static int aliveObjectNumbersSystem;
};

} /* namespace Talayhan */
#endif /* SYSTEMSOFTWARE_H_ */
