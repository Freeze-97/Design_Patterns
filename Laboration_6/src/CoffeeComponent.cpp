//
// Tommy Yasi (toya1800)

#include "CoffeeComponent.h"

CoffeeComponent::CoffeeComponent() = default;

CoffeeComponent::~CoffeeComponent() = default;

string CoffeeComponent::getName() {
    return "Coffee";
}

int CoffeeComponent::getCost() {
    return 10;
}
