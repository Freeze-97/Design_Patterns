//
// Tommy Yasi (toya1800)

#ifndef DT063G_SUGARDECORATOR_H
#define DT063G_SUGARDECORATOR_H

#include "ExtraDecorator.h"

/**
 * @brief A concrete decorator representing sugar which will be added
 * to the beverage
 */
class SugarDecorator : public ExtraDecorator {
public:
    /**
     * @brief Constructor
     * @param pBeverageComponent - The beverage
     */
    explicit SugarDecorator(BeverageComponent *pBeverageComponent);

    /**
     * @brief Destrcutor
     */
    ~SugarDecorator() override;

    /**
     * @brief Returns all the names + "Sugar"
     * @return All names of the components + "Sugar"
     */
    string getName() override;

    /**
     * @brief All cost + the cost of this extra
     * @return All cost + 1
     */
    int getCost() override;
};

#endif //DT063G_SUGARDECORATOR_H
