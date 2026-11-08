

#include "../include/batsman.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Constructor
Batsman::Batsman(string name, int jerseyNumber)
    : Player(name, jerseyNumber) {
    runs = 0;
    ballsFaced = 0;
    fours = 0;
    sixes = 0;
}

// Add runs
void Batsman::addRuns(int run) {
    if (run < 0 || run > 6) {
        cout << "Invalid runs!" << endl;
        return;
    }

    runs += run;

    if (run == 4) {
        fours++;
    }
    else if (run == 6) {
        sixes++;
    }
}

// Record a ball faced
void Batsman::faceBall() {
    ballsFaced++;
}

// Getters
int Batsman::getRuns() const {
    return runs;
}

int Batsman::getBallsFaced() const {
    return ballsFaced;
}

int Batsman::getFours() const {
    return fours;
}

int Batsman::getSixes() const {
    return sixes;
}

// Calculate strike rate
double Batsman::calculateStrikeRate() const {
    if (ballsFaced == 0) {
        return 0.0;
    }

    return (static_cast<double>(runs) / ballsFaced) * 100;
}

// Display batting statistics
void Batsman::displayStats() const {
    cout << "\n------ BATTING STATISTICS ------" << endl;
    cout << "Player Name : " << getName() << endl;
    cout << "Jersey No.  : " << getJerseyNumber() << endl;
    cout << "Runs        : " << runs << endl;
    cout << "Balls Faced : " << ballsFaced << endl;
    cout << "Fours       : " << fours << endl;
    cout << "Sixes       : " << sixes << endl;

    cout << fixed << setprecision(2);
    cout << "Strike Rate : " << calculateStrikeRate() << endl;
}
