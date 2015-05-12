#include "GraphicsComponent.h"

GraphicsComponent::GraphicsComponent(char* immagePath, GameObject& owner);
GraphicsComponent::GraphicsComponent(unsigned int sprite);

void GraphicsComponent::Update(GameObject& owner);