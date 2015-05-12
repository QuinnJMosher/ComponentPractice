#ifndef _GraphicsComponent_h_
#define _GraphicsComponent_h_

#include "Component.h"//parent
#include "AIE.h"

class GraphicsComponent : public Component {
public:
	GraphicsComponent(char* immagePath, GameObject& owner);
	GraphicsComponent(unsigned int sprite);

	virtual void Update(GameObject& owner);

private:
	unsigned int spriteID;

};

#endif