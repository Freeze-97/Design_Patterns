//
// Tommy Yasi (toya1800)

#ifndef DT063G_CHOCOLATECOMPONENT_H
#define DT063G_CHOCOLATECOMPONENT_H

#include "BeverageComponent.h"

/**
 * @brief Chocolate class representing a concrete component of beverage
 */
class ChocolateComponent : public BeverageComponent {

public:
    /**
     * @brief Constructor
     */
    ChocolateComponent();

    /**
     * @brief Destrcutor
     */
    ~ChocolateComponent() override;

    /**
     * @brief Returns the name of this beverage
     * @return "Chocolate"
     */
    string getName() override;

    /**
     * @brief Returns the price of a cup of chocolate
     * @return 12
     */
    int getCost() override;

};

#endif //DT063G_CHOCOLATECOMPONENT_H
