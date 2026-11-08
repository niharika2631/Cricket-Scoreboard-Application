
#include "../include/extras.h"
#include <iostream>

using namespace std;

// Constructor
Extras::Extras() {
    wideRuns = 0;
    noBallRuns = 0;
    byeRuns = 0;
    legByeRuns = 0;
}

// Add wide runs
void Extras::addWide(int runs) {
    if (runs >= 1) {
        wideRuns += runs;
    }
}

// Add no-ball runs
void Extras::addNoBall(int runs) {
    if (runs >= 1) {
        noBallRuns += runs;
    }
}

// Add bye runs
void Extras::addBye(int runs) {
    if (runs > 0) {
        byeRuns += runs;
    }
}

// Add leg-bye runs
void Extras::addLegBye(int runs) {
    if (runs > 0) {
        legByeRuns += runs;
    }
}

// Getter methods
int Extras::getWideRuns() const {
    return wideRuns;
}

int Extras::getNoBallRuns() const {
    return noBallRuns;
}

int Extras::getByeRuns() const {
    return byeRuns;
}

int Extras::getLegByeRuns() const {
    return legByeRuns;
}

// Calculate total extras
int Extras::calculateTotalExtras() const {
    return wideRuns + noBallRuns
           + byeRuns + legByeRuns;
}

// Display extras
void Extras::displayExtras() const {
    cout << "\n------ EXTRAS DETAILS ------" << endl;

    cout << "Wide Runs    : " << wideRuns << endl;
    cout << "No Ball Runs : " << noBallRuns << endl;
    cout << "Bye Runs     : " << byeRuns << endl;
    cout << "Leg Bye Runs : " << legByeRuns << endl;

    cout << "Total Extras : "
         << calculateTotalExtras() << endl;
}

// Reset extras
void Extras::resetExtras() {
    wideRuns = 0;
    noBallRuns = 0;
    byeRuns = 0;
    legByeRuns = 0;
}
