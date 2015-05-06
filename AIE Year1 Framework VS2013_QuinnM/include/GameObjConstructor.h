#ifndef _GameObjConstructor_h_
#define _GameObjConstructor_h_


#include "Component.h"

class GameObject;

class GameObjConstructer {
public:
	static GameObject* ConstructEmpty();
};

#endif