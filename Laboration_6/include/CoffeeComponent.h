//
// Tommy Yasi (toya1800)

#ifndef DT063G_COFFEECOMPONENT_H
#define DT063G_COFFEECOMPONENT_H

#include "BeverageComponent.h"

/**
 * @brief Coffee class representing a concrete component of beverage
 */
class CoffeeComponent : public BeverageComponent {

public:
    /**
     * @brief Constructor
     */
    CoffeeComponent();

    /**
     * @brief Destrcutor
     */
    ~CoffeeComponent() override;

    /**
     * @brief Returns the name of this beverage
     * @return "Coffee"
     */
    string getName() override;

    /**
     * @brief Returns the price of a coffee
     * @return 10
     */
    int getCost() override;

};

#endif //DT063G_COFFEECOMPONENT_H
