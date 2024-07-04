//
// Tommy Yasi (toya1800)

#include "ChocolateComponent.h"

ChocolateComponent::ChocolateComponent() = default;

ChocolateComponent::~ChocolateComponent() = default;

string ChocolateComponent::getName() {
    return "Chocolate";
}

int ChocolateComponent::getCost() {
    return 12;
}
