//
// Tommy Yasi (toya1800)

#ifndef DT063G_BEVERAGECOMPONENT_H
#define DT063G_BEVERAGECOMPONENT_H

#include <string>

using std::string;

/**
 * @brief An interface for all the beverage classes
 */
class BeverageComponent {
protected:
    /**
     * @brief Constructor
     */
    BeverageComponent();

public:
    /**
     * @brief Destrcutor
     */
    virtual ~BeverageComponent();

    /**
     * @brief Returns the name of the beverage
     * @return Name of the beverage
     */
    virtual string getName() = 0;

    /**
     * @brief Returns the cost of the beverage
     * @return Cost of the beverage
     */
    virtual int getCost() = 0;
};

#endif //DT063G_BEVERAGECOMPONENT_H
