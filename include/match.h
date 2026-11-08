
#ifndef MATCH_H
#define MATCH_H

#include "team.h"
#include "scoreboard.h"
#include "extras.h"
#include <string>

using namespace std;

class Match {
private:
    Team team1;
    Team team2;

    Scoreboard firstInnings;
    Scoreboard secondInnings;

    Extras extras;

    int maxOvers;
    int firstInningsScore;

    bool secondInningsStarted;
    bool matchCompleted;

public:
    // Constructor
    Match(Team t1, Team t2, int overs);

    // Start match
    void startMatch();

    // Start second innings
    void startSecondInnings();

    // Record runs
    void recordRuns(int runs);

    // Record wickets
    void recordWicket();

    // Record legal ball
    void recordLegalBall();

    // Record extras
    void recordWide(int runs);
    void recordNoBall(int runs);
    void recordBye(int runs);
    void recordLegBye(int runs);

    // Get current scoreboard
    Scoreboard& getCurrentScoreboard();

    // Display match details
    void displayMatchDetails() const;

    // Display final result
    void displayResult();

    // Check match status
    bool isMatchCompleted() const;
};

#endif
