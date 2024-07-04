//
// Tommy Yasi (toya1800)

#include "MilkDecorator.h"

MilkDecorator::MilkDecorator(BeverageComponent *pBeverageComponent)
: ExtraDecorator(pBeverageComponent) {}

MilkDecorator::~MilkDecorator() = default;

string MilkDecorator::getName() {
    return ExtraDecorator::getName() + " + Milk";
}

int MilkDecorator::getCost() {
    return ExtraDecorator::getCost() + 1;
}


