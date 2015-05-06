#ifndef _Component_h_
#define _Component_h_

#include "GameObject.h"

class GameObject;

class Component {
public:
	virtual void Update(GameObject& owner) = 0;
	virtual void GetTag() = 0;
	bool MultipleOK() { return multipleOK; }

private:
	char tag;
	bool multipleOK;
};

#endif