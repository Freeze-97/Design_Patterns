//
// Tommy Yasi (toya1800)

#ifndef DT063G_TEACOMPONENT_H
#define DT063G_TEACOMPONENT_H

#include "BeverageComponent.h"

/**
 * @brief Tea class representing a concrete component of beverage
 */
class TeaComponent : public BeverageComponent {
public:
    /**
     * @brief Constructor
     */
    TeaComponent();

    /**
     * @brief Destrcutor
     */
    ~TeaComponent() override;

    /**
     * @brief Returns the name of this beverage
     * @return "Tea"
     */
    string getName() override;

    /**
     * @brief Returns the price of a cup of tea
     * @return 10
     */
    int getCost() override;
};

#endif //DT063G_TEACOMPONENT_H
