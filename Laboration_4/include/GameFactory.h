//------------------------------------------------------------------------------
// GameFactory.h DT063G Design Patterns With C++
// GameFactory is an abstract class which defines an interface for
// derived concrete classes
//
// Tommy Yasi (toya1800)
//------------------------------------------------------------------------------

#pragma once

#include <vector>
#include <string>

using std::vector;
using std::string;

class Player;
class Obstacle;
class Action;

/**
 * @brief Abstract class
 */
class GameFactory {
 protected:
    /**
     * @brief Constructor
     */
    GameFactory() = default;

 public:
    /**
     * @brief Destructor
     */
    virtual ~GameFactory() = default;

    // Suitable operations: see class Game

    /**
     * @brief Create the title name
     * @return the title name
     */
    virtual string createTitle() = 0;

    /**
     * @brief A vector where all obstacles are created and stored
     * @return Vector with all Abstacle objects
     */
    virtual vector<Obstacle*> createObstacles() = 0;

    /**
     * @brief A vector where all obstacles are created and stored
     * @return Vector with all Action objects
     */
    virtual vector<Action*> createActions() = 0;

    /**
     * @brief Creates the player
     * @return Player object
     */
    virtual Player *createPlayer() = 0;

};


/**
     * NastyGameFactory:
     *
     * Suitable operations
     * (implementations of GameFactory.cpp)
     *
     * Obstacles:
     * Dragon, Bomb, Samuray, SumoWrestler, Gangster
     *
     * Possible Actions:
     * BowAndShakeHandsAction, RunAndHideAction, SwordAction, RifleAction,
     * OfferFoodAction, ChainsawAction, CastAspellAction, BargainAndBuyAction, SurrenderAction
     *
     * Player:
     * HeroPlayer
     */
class NastyGameFactory : public GameFactory {
public:
    /**
     * @brief Constructor
     */
    NastyGameFactory();

    /**
     * @brief Destructor
     */
    ~NastyGameFactory() override;

    /**
     * @brief Create the title name
     * @return the title name
     */
    string createTitle() override;

    /**
     * @brief A vector where all obstacles are created and stored
     * @return Vector with all Abstacle objects
     */
    vector<Obstacle*> createObstacles() override;

    /**
     * @brief A vector where all obstacles are created and stored
     * @return Vector with all Action objects
     */
    vector<Action*> createActions() override;

    /**
     * @brief Creates the player
     * @return Player object
     */
    Player *createPlayer() override;
};

/**
     * NiceGameFactory:
     *
     * Suitable operations
     * (implementations of GameFactory.cpp)
     *
     * Obstacles:
     * Wizard, Wall, Elephant, DPexam
     *
     * Possible Actions:
     * BowAndShakeHandsAction, RunAndHideAction, BargainAndBuyAction,
     * ChainsawAction, ClimbAction, CastAspellAction, SurrenderAction
     *
     * Player:
     * OrdinaryPlayer
     */
class NiceGameFactory : public GameFactory {
public:
    /**
     * @brief Constructor
     */
    NiceGameFactory();

    /**
     * @brief Destructor
     */
    ~NiceGameFactory() override;

    /**
     * @brief Create the title name
     * @return the title name
     */
    string createTitle() override;

    /**
     * @brief A vector where all obstacles are created and stored
     * @return Vector with all Abstacle objects
     */
    vector<Obstacle*> createObstacles() override;

    /**
     * @brief A vector where all obstacles are created and stored
     * @return Vector with all Action objects
     */
    vector<Action*> createActions() override;

    /**
     * @brief Creates the player
     * @return Player object
     */
    Player *createPlayer() override;
};