
#include "../include/bowler.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Constructor
Bowler::Bowler(string name, int jerseyNumber)
    : Player(name, jerseyNumber) {
    ballsBowled = 0;
    runsConceded = 0;
    wickets = 0;
}

// Record one legal delivery
void Bowler::bowlBall() {
    ballsBowled++;
}

// Add runs conceded
void Bowler::addRunsConceded(int runs) {
    if (runs < 0) {
        cout << "Invalid runs!" << endl;
        return;
    }

    runsConceded += runs;
}

// Record a wicket
void Bowler::takeWicket() {
    wickets++;
}

// Getter methods
int Bowler::getBallsBowled() const {
    return ballsBowled;
}

int Bowler::getRunsConceded() const {
    return runsConceded;
}

int Bowler::getWickets() const {
    return wickets;
}

// Calculate economy rate
double Bowler::calculateEconomy() const {
    if (ballsBowled == 0) {
        return 0.0;
    }

    double overs = ballsBowled / 6.0;

    return runsConceded / overs;
}

// Display bowling statistics
void Bowler::displayStats() const {
    cout << "\n------ BOWLING STATISTICS ------" << endl;

    cout << "Player Name   : " << getName() << endl;
    cout << "Jersey Number : " << getJerseyNumber() << endl;

    cout << "Overs         : "
         << ballsBowled / 6 << "."
         << ballsBowled % 6 << endl;

    cout << "Runs Conceded : " << runsConceded << endl;
    cout << "Wickets       : " << wickets << endl;

    cout << fixed << setprecision(2);
    cout << "Economy Rate  : "
         << calculateEconomy() << endl;
}
