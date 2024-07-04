//
// Tommy Yasi (toya1800)

#ifndef DT063G_EXTRADECORATOR_H
#define DT063G_EXTRADECORATOR_H

#include "BeverageComponent.h"

/**
 * @brief Decorates a beverage and used as an interface
 *  for all topping decorators. Both IS-A and HAS-A
 *  relationship with BeverageComponent
 */
class ExtraDecorator : public BeverageComponent{
private:
    BeverageComponent *beverageComponent;
protected:
    /**
     * @brief Constrcutor
     * @param pBeverageComponent - The beverage
     */
    explicit ExtraDecorator(BeverageComponent *pBeverageComponent);

public:
    /**
     * @brief Destructor
     */
    ~ExtraDecorator() override;

    /**
     * @brief Returns the beverageComponents name
     * @return Name of all the bevreage components
     */
    string getName() override;

    /**
     * @brief Will return total price with all components
     * @return Total price for all the components
     */
    int getCost() override;
};

#endif //DT063G_EXTRADECORATOR_H
