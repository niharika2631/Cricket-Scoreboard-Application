

#include "../include/match.h"
#include <iostream>

using namespace std;

// Constructor
Match::Match(Team t1, Team t2, int overs)
    : team1(t1),
      team2(t2),
      firstInnings(t1.getTeamName(), t2.getTeamName(), overs),
      secondInnings(t2.getTeamName(), t1.getTeamName(), overs) {

    maxOvers = overs;
    firstInningsScore = 0;
    secondInningsStarted = false;
    matchCompleted = false;
}

// Start the match
void Match::startMatch() {
    cout << "\n====================================" << endl;
    cout << "       CRICKET MATCH STARTED        " << endl;
    cout << "====================================" << endl;

    cout << "Team 1: " << team1.getTeamName() << endl;
    cout << "Team 2: " << team2.getTeamName() << endl;
    cout << "Maximum Overs: " << maxOvers << endl;

    cout << "\nFirst Innings: "
         << team1.getTeamName()
         << " batting." << endl;

    team1.displayTeamDetails();
    team2.displayTeamDetails();
}

// Get the current innings scoreboard
Scoreboard& Match::getCurrentScoreboard() {
    if (secondInningsStarted) {
        return secondInnings;
    }

    return firstInnings;
}

// Record batsman's runs
void Match::recordRuns(int runs) {
    if (matchCompleted ||
        getCurrentScoreboard().isInningsOver()) {
        return;
    }

    getCurrentScoreboard().addRuns(runs);
}

// Record a wicket
void Match::recordWicket() {
    if (matchCompleted ||
        getCurrentScoreboard().isInningsOver()) {
        return;
    }

    getCurrentScoreboard().addWicket();
}

// Record a legal delivery
void Match::recordLegalBall() {
    if (matchCompleted ||
        getCurrentScoreboard().isInningsOver()) {
        return;
    }

    getCurrentScoreboard().addLegalBall();
}

// Record wide runs
void Match::recordWide(int runs) {
    if (matchCompleted || runs < 1 ||
        getCurrentScoreboard().isInningsOver()) {
        return;
    }

    getCurrentScoreboard().addWide(runs);
    extras.addWide(runs);
}

// Record no-ball runs
void Match::recordNoBall(int runs) {
    if (matchCompleted || runs < 1 ||
        getCurrentScoreboard().isInningsOver()) {
        return;
    }

    getCurrentScoreboard().addNoBall(runs);
    extras.addNoBall(runs);
}

// Record bye runs
void Match::recordBye(int runs) {
    if (matchCompleted || runs < 0 ||
        getCurrentScoreboard().isInningsOver()) {
        return;
    }

    getCurrentScoreboard().addBye(runs);
    extras.addBye(runs);
}

// Record leg-bye runs
void Match::recordLegBye(int runs) {
    if (matchCompleted || runs < 0 ||
        getCurrentScoreboard().isInningsOver()) {
        return;
    }

    getCurrentScoreboard().addLegBye(runs);
    extras.addLegBye(runs);
}

// Start the second innings
void Match::startSecondInnings() {
    if (secondInningsStarted) {
        cout << "\nSecond innings has already started!" << endl;
        return;
    }

    if (!firstInnings.isInningsOver()) {
        cout << "\nFirst innings is not over yet!" << endl;
        return;
    }

    firstInningsScore = firstInnings.getTotalRuns();

    secondInnings.setTargetScore(firstInningsScore + 1);

    secondInningsStarted = true;

    cout << "\n====================================" << endl;
    cout << "       SECOND INNINGS STARTED       " << endl;
    cout << "====================================" << endl;

    cout << team2.getTeamName()
         << " needs "
         << secondInnings.getTargetScore()
         << " runs to win!" << endl;
}

// Display match details
void Match::displayMatchDetails() const {
    cout << "\n========== MATCH DETAILS ==========" << endl;

    cout << "Team 1: " << team1.getTeamName() << endl;
    cout << "Team 2: " << team2.getTeamName() << endl;

    cout << "\nFirst Innings Scoreboard:" << endl;
    firstInnings.displayScoreboard();

    if (secondInningsStarted) {
        cout << "\nSecond Innings Scoreboard:" << endl;
        secondInnings.displayScoreboard();
    }
}

// Display match result
void Match::displayResult() {
    if (!secondInningsStarted ||
        !secondInnings.isInningsOver()) {
        cout << "\nThe match is not completed yet!" << endl;
        return;
    }

    matchCompleted = true;

    int score1 = firstInnings.getTotalRuns();
    int score2 = secondInnings.getTotalRuns();

    cout << "\n====================================" << endl;
    cout << "           MATCH RESULT             " << endl;
    cout << "====================================" << endl;

    if (score1 > score2) {
        cout << team1.getTeamName()
             << " wins by "
             << score1 - score2
             << " runs!" << endl;
    }
    else if (score2 > score1) {
        cout << team2.getTeamName()
             << " wins by "
             << (10 - secondInnings.getTotalWickets())
             << " wickets!" << endl;
    }
    else {
        cout << "The match is tied!" << endl;
    }

    cout << "====================================" << endl;
}

// Check whether match is completed
bool Match::isMatchCompleted() const {
    return matchCompleted ||
           (secondInningsStarted &&
            secondInnings.isInningsOver());
}
