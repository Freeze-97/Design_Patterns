//
// Tommy Yasi (toya1800)

#ifndef DT063G_MILKDECORATOR_H
#define DT063G_MILKDECORATOR_H

#include "ExtraDecorator.h"

/**
 * @brief A concrete decorator representing milk which will be added
 * to the beverage
 */
class MilkDecorator : public ExtraDecorator {
public:
    /**
     * @brief Constructor
     * @param pBeverageComponent - The beverage
     */
    explicit MilkDecorator(BeverageComponent *pBeverageComponent);

    /**
     * @brief Destrcutor
     */
    ~MilkDecorator() override;

    /**
     * @brief Returns all the names + "Milk"
     * @return All names of the components + "Milk"
     */
    string getName() override;

    /**
     * @brief All cost + the cost of this extra
     * @return All cost + 1
     */
    int getCost() override;
};

#endif //DT063G_MILKDECORATOR_H
