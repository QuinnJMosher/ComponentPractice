#include "GameObject.h"

GameObject::GameObject() {
	components = std::vector<Component*>();
	x = 0.0f;
	y = 0.0f;

	velocityX = 0.0f;
	velocityY = 0.0f;

	width = 0;
	height = 0;
}

GameObject::~GameObject() {
	components.~vector();
}

void GameObject::AddComponent(char in_type) {
	Component* dupeCheck = GetComponent(in_type);
	if (dupeCheck != nullptr) {
		if (!dupeCheck->MultipleOK()) {
			return;
		}
	}

	switch (in_type) {
	default:
		break;
	}
}

void GameObject::AddComponent(Component* in_component) {
	Component* dupeCheck = GetComponent(in_component->GetTag());
	if (dupeCheck != nullptr) {
		if (!dupeCheck->MultipleOK()) {
			return;
		}
	}

	components.emplace_back(in_component);
}

Component* GameObject::GetComponent(char in_type) {
	for (int i = 0; i < components.size(); i++) {
		if (components[i]->GetTag() == in_type) {
			return components[i];
		}
	}

	return nullptr;
}

std::vector<Component*> GameObject::GetComponents(char in_type) {
	std::vector<Component*> output = std::vector<Component*>();
	for (int i; i < components.size(); i++) {
		if (components[i]->GetTag() == in_type); {
			output.emplace_back(components[i]);
		}
	}
	return output;
}

void GameObject::UpdateComponents() {
	for (int i = 0; i < components.size(); i++) {
		components[i]->Update(*this);
	}
}

void GameObject::UpdateComponents(char in_type) {
	for (int i = 0; i < components.size(); i++) {
		if (components[i]->GetTag() == in_type) {
			components[i]->Update(*this);
		}	
	}
}