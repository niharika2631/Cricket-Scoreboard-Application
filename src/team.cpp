
#include "../include/team.h"
#include <iostream>

using namespace std;

// Constructor
Team::Team(string name) {
    teamName = name;
}

// Set team name
void Team::setTeamName(string name) {
    if (!name.empty()) {
        teamName = name;
    }
}

// Get team name
string Team::getTeamName() const {
    return teamName;
}

// Add batsman to team
void Team::addBatsman(Batsman player) {
    batsmen.push_back(player);
}

// Add bowler to team
void Team::addBowler(Bowler player) {
    bowlers.push_back(player);
}

// Display team details
void Team::displayTeamDetails() const {
    cout << "\n================================" << endl;
    cout << "          TEAM DETAILS          " << endl;
    cout << "================================" << endl;

    cout << "Team Name : " << teamName << endl;
    cout << "Total Players : " << getTotalPlayers() << endl;
    cout << "Total Batsmen : " << getBatsmanCount() << endl;
    cout << "Total Bowlers : " << getBowlerCount() << endl;
}

// Display batsmen
void Team::displayBatsmen() const {
    cout << "\nBATTING PLAYERS" << endl;

    for (const Batsman& player : batsmen) {
        player.displayStats();
    }
}

// Display bowlers
void Team::displayBowlers() const {
    cout << "\nBOWLING PLAYERS" << endl;

    for (const Bowler& player : bowlers) {
        player.displayStats();
    }
}

// Total players
int Team::getTotalPlayers() const {
    return batsmen.size() + bowlers.size();
}

// Batsman count
int Team::getBatsmanCount() const {
    return batsmen.size();
}

// Bowler count
int Team::getBowlerCount() const {
    return bowlers.size();
}
