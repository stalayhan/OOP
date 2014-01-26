//============================================================================
// Name        : Compilers.h
// Author      : Samet Sait Talayhan
// Version     : 0.001
// Copyright   : The MIT License (MIT)
//
// Description : CSE241_HW3 in C++, Ansi-style
//============================================================================

#ifndef COMPILERS_H_
#define COMPILERS_H_

#include "101044044HW06P02.h"

namespace Talayhan {

using std::string;

class Compilers: public Talayhan::SystemSoftware {
public:
	Compilers();
	virtual ~Compilers();
	static int getAliveObjectNumbers();
	const string& getName() const;
	void setName(const string& name);

private:
	string name;
	static int aliveObjectNumbersComp;
};

} /* namespace Talayhan */
#endif /* COMPILERS_H_ */
