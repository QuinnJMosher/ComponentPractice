#include "GameobjConstructor.h"

GameObject* GameObjConstructer::ConstructEmpty() {
	return new GameObject();
}