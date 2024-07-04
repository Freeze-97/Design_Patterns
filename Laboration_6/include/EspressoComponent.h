//
// Tommy Yasi (toya1800)

#ifndef DT063G_ESPRESSOCOMPONENT_H
#define DT063G_ESPRESSOCOMPONENT_H

#include "BeverageComponent.h"

/**
 * @brief Espresso class representing a concrete component of beverage
 */
class EspressoComponent : public BeverageComponent {

public:
    /**
     * @brief Constructor
     */
    EspressoComponent();

    /**
     * @brief Destrcutor
     */
    ~EspressoComponent() override;

    /**
     * @brief Returns the name of this beverage
     * @return "Espresso"
     */
    string getName() override;

    /**
     * @brief Returns the price of an epresso
     * @return 14
     */
    int getCost() override;
};

#endif //DT063G_ESPRESSOCOMPONENT_H
