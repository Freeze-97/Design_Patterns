//
// Tommy Yasi (toya1800)

#ifndef DT063G_WHIPPEDCREAMDECORATOR_H
#define DT063G_WHIPPEDCREAMDECORATOR_H

#include "ExtraDecorator.h"

/**
 * @brief A concrete decorator representing whipped cream which will be added
 * to the beverage
 */
class WhippedCreamDecorator : public ExtraDecorator {
public:
    /**
     * @brief Constructor
     * @param pBeverageComponent - The beverage
     */
    explicit WhippedCreamDecorator(BeverageComponent *pBeverageComponent);

    /**
     * @brief Destrcutor
     */
    ~WhippedCreamDecorator() override;

    /**
     * @brief Returns all the names + "Whipped Cream"
     * @return All names of the components + "Whipped Cream"
     */
    string getName() override;

    /**
     * @brief All cost + the cost of this extra
     * @return All cost + 5
     */
    int getCost() override;
};

#endif //DT063G_WHIPPEDCREAMDECORATOR_H
