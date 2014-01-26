//============================================================================
// Name        : Software.h
// Author      : Samet Sait Talayhan
// Version     : 0.001
// Copyright   : The MIT License (MIT)
//
//	Copyright (c) 2013 samet.talayhan@gmail.com Created on: Dec 1, 2013, Cse241 HW06
//
// Description : CSE241_HW3 in C++, Ansi-style
//============================================================================

#ifndef SOFTWARE_H_
#define SOFTWARE_H_

#include <string>

using std::string;

namespace Talayhan {

class Software {
public:
	Software();
	virtual ~Software();
	static int getAliveObjectNumber();
	const string& getName() const;
	void setName(const string& name);

private:
	string name;
	static int aliveObjectNumberSoftware;
};

} /* namespace Talayhan */
#endif /* SOFTWARE_H_ */
