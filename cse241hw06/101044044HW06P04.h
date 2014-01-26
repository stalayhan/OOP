//============================================================================
// Name        : ApplicationSoftware.h
// Author      : Samet Sait Talayhan
// Version     : 0.001
// Copyright   : The MIT License (MIT)
//
// Description : CSE241_HW3 in C++, Ansi-style
//============================================================================

#ifndef APPLICATIONSOFTWARE_H_
#define APPLICATIONSOFTWARE_H_

#include "101044044HW06P01.h"
#include <string>

namespace Talayhan {

using std::string;

class ApplicationSoftware: public Talayhan::Software {
public:
	ApplicationSoftware();
	virtual ~ApplicationSoftware();
	static int getAliveObjectNumber();
	const string& getName() const;
	void setName(const string& name);

private:
	string name;
	static int aliveObjectNumberApp;
};

} /* namespace Talayhan */
#endif /* APPLICATIONSOFTWARE_H_ */
