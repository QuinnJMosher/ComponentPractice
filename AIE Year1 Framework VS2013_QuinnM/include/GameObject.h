#ifndef _GameObject_h_
#define _GameObject_h_

#include <vector>
#include "Component.h"


class GameObjConstructor;

class GameObject  {
	friend class GameObjConstructor;
public:
	float x, y;
	float velocityX, velocityY;
	//component blackboard?

	void AddComponent(char in_type);
	void AddComponent(Component* in_component);

	Component* GetComponent(char in_type);
	std::vector<Component*> GetComponents(char in_type);

	void UpdateComponents(char in_type);

private:
	std::vector<Component> components;

	GameObject();
	~GameObject();
};

#endif