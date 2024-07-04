//
// Tommy Yasi (toya1800)

#include "ExtraDecorator.h"

ExtraDecorator::ExtraDecorator(BeverageComponent *pBeverageComponent)
: beverageComponent(pBeverageComponent) {}

ExtraDecorator::~ExtraDecorator() {
    // Avoid memory leak by deleting pointer
    delete beverageComponent;
}

string ExtraDecorator::getName() {
    // If it isn't declared, return empty string
    if(beverageComponent == nullptr) {
        return "";
    }
    return beverageComponent->getName();
}

int ExtraDecorator::getCost() {
    // If it isn't declared, return 0 int
    if(beverageComponent == nullptr) {
        return 0;
    }
    return beverageComponent->getCost();
}


