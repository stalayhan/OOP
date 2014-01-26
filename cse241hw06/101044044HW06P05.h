//============================================================================
// Name        : Firmware.h
// Author      : Samet Sait Talayhan
// Version     : 0.001
// Copyright   : The MIT License (MIT)
//
// Description : CSE241_HW3 in C++, Ansi-style
//============================================================================

#ifndef FIRMWARE_H_
#define FIRMWARE_H_

#include "101044044HW06P02.h"

namespace Talayhan {
using std::string;

class Firmware: public Talayhan::SystemSoftware {
public:
	Firmware();
	virtual ~Firmware();
	static int getAliveObjectNumbers();
	string getName() const;
	void setName(string name);

private:
	string name;
	static int aliveObjectNumbersFirmware;
};

} /* namespace Talayhan */
#endif /* FIRMWARE_H_ */
