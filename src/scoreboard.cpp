

#include "../include/scoreboard.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Constructor
Scoreboard::Scoreboard(string batting, string bowling, int overs) {
    battingTeam = batting;
    bowlingTeam = bowling;

    totalRuns = 0;
    totalWickets = 0;
    legalBalls = 0;
    extras = 0;
    targetScore = 0;
    maxOvers = overs;
}

// Add batsman's runs
void Scoreboard::addRuns(int runs) {
    if (runs >= 0 && runs <= 6) {
        totalRuns += runs;
    }
}

// Add wide-ball runs
void Scoreboard::addWide(int runs) {
    if (runs >= 1) {
        totalRuns += runs;
        extras += runs;
    }
}

// Add no-ball runs
void Scoreboard::addNoBall(int runs) {
    if (runs >= 1) {
        totalRuns += runs;
        extras += runs;
    }
}

// Add bye runs
void Scoreboard::addBye(int runs) {
    if (runs >= 0) {
        totalRuns += runs;
        extras += runs;
    }
}

// Add leg-bye runs
void Scoreboard::addLegBye(int runs) {
    if (runs >= 0) {
        totalRuns += runs;
        extras += runs;
    }
}

// Add wicket
void Scoreboard::addWicket() {
    if (totalWickets < 10) {
        totalWickets++;
    }
}

// Add one legal delivery
void Scoreboard::addLegalBall() {
    if (legalBalls < maxOvers * 6) {
        legalBalls++;
    }
}

// Calculate run rate
double Scoreboard::calculateRunRate() const {
    if (legalBalls == 0) {
        return 0.0;
    }

    double overs = legalBalls / 6.0;
    return totalRuns / overs;
}

// Get completed overs
int Scoreboard::getOvers() const {
    return legalBalls / 6;
}

// Get remaining balls in current over
int Scoreboard::getBalls() const {
    return legalBalls % 6;
}

// Get total runs
int Scoreboard::getTotalRuns() const {
    return totalRuns;
}

// Get total wickets
int Scoreboard::getTotalWickets() const {
    return totalWickets;
}

// Get total extras
int Scoreboard::getExtras() const {
    return extras;
}

// Get target score
int Scoreboard::getTargetScore() const {
    return targetScore;
}

// Set target score
void Scoreboard::setTargetScore(int target) {
    targetScore = target;
}

// Check whether innings is over
bool Scoreboard::isInningsOver() const {
    return totalWickets >= 10 ||
           legalBalls >= maxOvers * 6 ||
           (targetScore > 0 && totalRuns >= targetScore);
}

// Display scoreboard
void Scoreboard::displayScoreboard() const {
    cout << "\n====================================" << endl;
    cout << "           CRICKET SCOREBOARD       " << endl;
    cout << "====================================" << endl;

    cout << "Batting Team : " << battingTeam << endl;
    cout << "Bowling Team : " << bowlingTeam << endl;

    cout << "------------------------------------" << endl;

    cout << "Total Runs   : " << totalRuns << endl;
    cout << "Wickets      : " << totalWickets << endl;

    cout << "Overs        : " << getOvers()
         << "." << getBalls() << endl;

    cout << "Extras       : " << extras << endl;

    cout << fixed << setprecision(2);
    cout << "Run Rate     : " << calculateRunRate() << endl;

    if (targetScore > 0) {
        cout << "Target Score : " << targetScore << endl;
    }

    cout << "====================================" << endl;
}
