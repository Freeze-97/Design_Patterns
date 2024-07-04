//------------------------------------------------------------------------------
// GameFactory.cpp DT063G Design Patterns With C++
// Implementations of concrete factory classes
//------------------------------------------------------------------------------

#include "GameFactory.h"
#include "Obstacle.h"
#include "Action.h"
#include "../../Laboration_7/include/GameFactory.h"


/** Implementations of concrete factory classes */

/** Nasty Game implementation */
NastyGameFactory::NastyGameFactory() : GameFactory() {}

NastyGameFactory::~NastyGameFactory() = default;

string NastyGameFactory::createTitle() {
    return "Nasty Game";
}

vector<Obstacle*> NastyGameFactory::createObstacles() {
    return vector<Obstacle*>({new Dragon(), new Bomb(),new Samuray(),
                              new SumoWrestler(), new Gangster()});
}

vector<Action*> NastyGameFactory::createActions() {
    return vector<Action*>({new BowAndShakeHandsAction(), new RunAndHideAction(),
                             new SwordAction(), new RifleAction(),
                             new OfferFoodAction(), new ChainsawAction(),
                             new CastAspellAction(), new BargainAndBuyAction(),
                             new SurrenderAction()});
}

Player *NastyGameFactory::createPlayer() {
    return new HeroPlayer();
}

/** Nice Game implementation */

NiceGameFactory::NiceGameFactory() : GameFactory() {}

NiceGameFactory::~NiceGameFactory() = default;

string NiceGameFactory::createTitle() {
    return "Nice Game";
}

vector<Obstacle *> NiceGameFactory::createObstacles() {
    return vector<Obstacle *>({new Wizard(), new Wall(),
                               new Elephant(), new DPexam()});
}

vector<Action *> NiceGameFactory::createActions() {
    return vector<Action *>({new BowAndShakeHandsAction(), new RunAndHideAction(),
                             new BargainAndBuyAction(), new ChainsawAction(),
                             new ClimbAction(), new CastAspellAction(),
                             new SurrenderAction()});
}

Player *NiceGameFactory::createPlayer() {
    return new OrdinaryPlayer();
}
