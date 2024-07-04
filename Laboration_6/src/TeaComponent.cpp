//
// Tommy Yasi (toya1800)

#include "TeaComponent.h"

TeaComponent::TeaComponent() = default;

TeaComponent::~TeaComponent() = default;

string TeaComponent::getName() {
    return "Tea";
}

int TeaComponent::getCost() {
    return 10;
}
