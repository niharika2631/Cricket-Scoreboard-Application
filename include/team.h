
#ifndef TEAM_H
#define TEAM_H

#include <string>
#include <vector>
#include "batsman.h"
#include "bowler.h"

using namespace std;

class Team {
private:
    string teamName;
    vector<Batsman> batsmen;
    vector<Bowler> bowlers;

public:
    // Constructor
    Team(string name);

    // Set team name
    void setTeamName(string name);

    // Get team name
    string getTeamName() const;

    // Add batsman
    void addBatsman(Batsman player);

    // Add bowler
    void addBowler(Bowler player);

    // Display team details
    void displayTeamDetails() const;

    // Display all batsmen
    void displayBatsmen() const;

    // Display all bowlers
    void displayBowlers() const;

    // Get number of players
    int getTotalPlayers() const;

    // Get batsman and bowler count
    int getBatsmanCount() const;
    int getBowlerCount() const;
};

#endif
