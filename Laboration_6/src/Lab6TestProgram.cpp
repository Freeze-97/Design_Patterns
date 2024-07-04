//
// Tommy Yasi (toya1800)

#include "Lab6TestProgram.h"

Lab6Testprogram::Lab6Testprogram() = default;
Lab6Testprogram::~Lab6Testprogram() = default;

bool Lab6Testprogram::askAnotherBeverage() {
    bool again = true;
    bool anotherBeverage;
    int input;

    do {
        cout << "Would you like to order another beverage?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;

        if(!(cin >> input)) {
            cin.clear();
            cin.ignore(1000, '\n');
        }

        switch (input) {
            case 1: {
                anotherBeverage = true;
                again = false;
                break;
            }
            case 2: {
                anotherBeverage = false;
                again = false;
                break;
            }
            default:
                cout << "Invalid input" << endl;

        }
    } while (again);

    return anotherBeverage;
}

void Lab6Testprogram::run() {
    do {
        BeverageComponent *beverageComponent = nullptr;

        // Ask which beverage the user want
        bool again_bevarage = true;
        int input_bevarage;

        do {
            cout << "Welcome! What would you like to order?" << endl;
            cout << "1. Coffee - 10 sek" << endl;
            cout << "2. Espresso - 14 sek" << endl;
            cout << "3. Tea - 10 sek" << endl;
            cout << "4. Chocolate 12 sek" << endl;

            if(!(cin >> input_bevarage)) {
                cin.clear();
                cin.ignore(1000, '\n');
            }

            switch (input_bevarage) {
                case 1: {
                    beverageComponent = new CoffeeComponent();
                    again_bevarage = false;
                    break;
                }
                case 2: {
                    beverageComponent = new EspressoComponent();
                    again_bevarage = false;
                    break;
                }
                case 3: {
                    beverageComponent = new TeaComponent();
                    again_bevarage = false;
                    break;
                }
                case 4: {
                    beverageComponent = new ChocolateComponent();
                    again_bevarage = false;
                    break;
                }
                default:
                    cout << "Invalid input_bevarage!" << endl;
            }
        } while (again_bevarage);
        cout << endl;

        // Ask if the user wants any extra flavours
        bool again_flavour_yes_or_no = true;
        int input_flavour_yes_or_no;
        do {
            cout << "Would you like to add some more extra flavours for your beverage?"
                    " You can add as many as you want." << endl;
            cout << "1. Yes" << endl;
            cout << "2. No" << endl;

            if(!(cin >> input_flavour_yes_or_no)) {
                cin.clear();
                cin.ignore(1000, '\n');
            }

            switch (input_flavour_yes_or_no) {
                case 1:
                    //askExtraFlavour();
                {
                    bool again_flavour = true;
                    int input_flavour;
                    do {
                        cout << "Which flavour do you want to add?" << endl;
                        cout << "1. Sugar" << endl;
                        cout << "2. Milk" << endl;
                        cout << "3. Cream" << endl;
                        cout << "4. Whipped Cream" << endl;

                        if(!(cin >> input_flavour)) {
                            cin.clear();
                            cin.ignore(1000, '\n');
                        }

                        switch (input_flavour) {
                            case 1: {
                                beverageComponent = new SugarDecorator(beverageComponent);
                                again_flavour = false;
                                break;
                            }
                            case 2: {
                                beverageComponent = new MilkDecorator(beverageComponent);
                                again_flavour = false;
                                break;
                            }
                            case 3: {
                                beverageComponent = new CreamDecorator(beverageComponent);
                                again_flavour = false;
                                break;
                            }
                            case 4: {
                                beverageComponent = new WhippedCreamDecorator(beverageComponent);
                                again_flavour = false;
                                break;
                            }
                            default:
                                cout << "Invalid input_bevarage" << endl;
                        }
                    } while (again_flavour);
                    cout << endl;
                }
                    break;
                case 2:
                    again_flavour_yes_or_no = false;
                    break;
                default:
                    cout << "Invalid input_bevarage" << endl;
            }
        } while (again_flavour_yes_or_no);
        cout << endl;

        // Write the order
        cout << "Your order: " << beverageComponent->getName() << ". "
             << "Cost: " << beverageComponent->getCost() << " sek" << endl << endl;

        // Delete component to avoid memory leaks
        delete beverageComponent;
    } while (askAnotherBeverage());
}
