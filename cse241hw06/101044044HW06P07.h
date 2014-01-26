//============================================================================
// Name        : EditingSoftware.h
// Author      : Samet Sait Talayhan
// Version     : 0.001
// Copyright   : The MIT License (MIT)
//
// Description : CSE241_HW3 in C++, Ansi-style
//============================================================================

#ifndef EDITINGSOFTWARE_H_
#define EDITINGSOFTWARE_H_

#include "101044044HW06P04.h"

namespace Talayhan {

class EditingSoftware: public Talayhan::ApplicationSoftware {
public:
	EditingSoftware();
	virtual ~EditingSoftware();
	static int getAliveObjectNumbers();
	const string& getName() const;
	void setName(const string& name);

private:
	string name;
	static int aliveObjectNumbersEdit;
};

} /* namespace Talayhan */
#endif /* EDITINGSOFTWARE_H_ */
