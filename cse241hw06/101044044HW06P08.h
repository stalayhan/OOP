//============================================================================
// Name        : LegalSoftware.h
// Author      : Samet Sait Talayhan
// Version     : 0.001
// Copyright   : The MIT License (MIT)
//
// Description : CSE241_HW3 in C++, Ansi-style
//============================================================================

#ifndef LEGALSOFTWARE_H_
#define LEGALSOFTWARE_H_

#include "101044044HW06P04.h"

namespace Talayhan {

class LegalSoftware: public Talayhan::ApplicationSoftware {
public:
	LegalSoftware();
	virtual ~LegalSoftware();
	static int getAliveObjectNumbers();
	const string& getName() const;
	void setName(const string& name);

private:
	string name;
	static int aliveObjectNumbersLegal;
};

} /* namespace Talayhan */
#endif /* LEGALSOFTWARE_H_ */
