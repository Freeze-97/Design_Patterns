//
// Tommy Yasi (toya1800)

#ifndef DT063G_CREAMDECORATOR_H
#define DT063G_CREAMDECORATOR_H

#include "ExtraDecorator.h"

/**
 * @brief A concrete decorator representing cream which will be added
 * to the beverage
 */
class CreamDecorator : public ExtraDecorator {
public:
    /**
     * @brief Constructor
     * @param pBeverageComponent - The beverage
     */
    explicit CreamDecorator(BeverageComponent *pBeverageComponent);

    /**
     * @brief Destrcutor
     */
    ~CreamDecorator() override;

    /**
     * @brief Returns all the names + "Cream"
     * @return All names of the components + "Cream"
     */
    string getName() override;

    /**
     * @brief All cost + the cost of this extra
     * @return All cost + 2
     */
    int getCost() override;
};

#endif //DT063G_CREAMDECORATOR_H
