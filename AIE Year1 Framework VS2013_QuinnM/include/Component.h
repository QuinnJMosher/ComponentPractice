#ifndef _Component_h_
#define _Component_h_

#include "GameObject.h"

class GameObject;

class Component {
public:
	virtual void Update(GameObject& owner) = 0;
	char GetTag() { return tag; }
	bool MultipleOK() { return multipleOK; };

protected:
	Component(char in_tag, bool in_multipleOK) {
		tag = in_tag;
		multipleOK = in_multipleOK;
	}

private:
	char tag;
	bool multipleOK;
};

#endif