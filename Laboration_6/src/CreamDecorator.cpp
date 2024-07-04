//
// Tommy Yasi (toya1800)

#include "CreamDecorator.h"

CreamDecorator::CreamDecorator(BeverageComponent *pBeverageComponent)
: ExtraDecorator(pBeverageComponent) {}

CreamDecorator::~CreamDecorator() = default;

string CreamDecorator::getName() {
    return ExtraDecorator::getName() + " + Cream";
}

int CreamDecorator::getCost() {
    return ExtraDecorator::getCost() + 2;
}

