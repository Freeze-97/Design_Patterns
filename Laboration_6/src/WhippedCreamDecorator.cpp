//
// Tommy Yasi (toya1800)

#include "WhippedCreamDecorator.h"


WhippedCreamDecorator::WhippedCreamDecorator(BeverageComponent *pBeverageComponent)
: ExtraDecorator(pBeverageComponent) {}

WhippedCreamDecorator::~WhippedCreamDecorator() = default;

string WhippedCreamDecorator::getName() {
    return ExtraDecorator::getName() + " + Whipped Cream";
}

int WhippedCreamDecorator::getCost() {
    return ExtraDecorator::getCost() + 5;
}

