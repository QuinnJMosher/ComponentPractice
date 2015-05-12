#include "GraphicsComponent.h"

GraphicsComponent::GraphicsComponent(char* immagePath, GameObject& owner) : Component('G', false) {
	spriteID = CreateSprite(immagePath, owner.width, owner.height, false);
}

GraphicsComponent::GraphicsComponent(unsigned int sprite) : Component('G', false) {
	spriteID = sprite;
}

void GraphicsComponent::Update(GameObject& owner) {
	MoveSprite(spriteID, owner.x, owner.y);
	DrawSprite(spriteID);
}