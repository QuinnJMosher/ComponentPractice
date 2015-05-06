#include "GameobjConstructor.h"

#include "GameObject.h"

GameObject* GameObjConstructer::ConstructEmpty() {
	return new GameObject();
}