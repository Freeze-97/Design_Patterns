//
// Tommy Yasi (toya1800)

#include "SugarDecorator.h"

SugarDecorator::SugarDecorator(BeverageComponent *pBeverageComponent)
: ExtraDecorator(pBeverageComponent) {}

SugarDecorator::~SugarDecorator() = default;

string SugarDecorator::getName() {
    return ExtraDecorator::getName() + " + Sugar";
}

int SugarDecorator::getCost() {
    return ExtraDecorator::getCost() + 1;
}
