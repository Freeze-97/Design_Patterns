//
// Tommy Yasi (toya1800)

#ifndef DT063G_LAB6TESTPROGRAM_H
#define DT063G_LAB6TESTPROGRAM_H

#include "BeverageComponent.h"
#include "ExtraDecorator.h"
#include "CoffeeComponent.h"
#include "EspressoComponent.h"
#include "TeaComponent.h"
#include "ChocolateComponent.h"
#include "SugarDecorator.h"
#include "MilkDecorator.h"
#include "CreamDecorator.h"
#include "WhippedCreamDecorator.h"
#include <iostream>
#include <memory>

using std::cout;
using std::endl;
using std::cin;

class Lab6Testprogram {
private:

    /**
     * @brief Ask if the user wants to order another beverage
     * @return Yes = true or No = false;
     */
    static bool askAnotherBeverage();
public:
    /**
     * @brief Constructor
     */
    Lab6Testprogram();

    /**
     * @brief Destrcutor
     */
    ~Lab6Testprogram();
    /**
     * @brief This starts the whole program from here
     */
     static void run();
};

#endif //DT063G_LAB6TESTPROGRAM_H
