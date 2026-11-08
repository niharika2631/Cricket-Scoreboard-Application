

#ifndef SCOREBOARD_H
#define SCOREBOARD_H

#include <string>
using namespace std;

class Scoreboard {
private:
    int totalRuns;
    int totalWickets;
    int legalBalls;
    int extras;
    int targetScore;
    int maxOvers;
    string battingTeam;
    string bowlingTeam;

public:
    Scoreboard(string batting, string bowling, int overs);

    void addRuns(int runs);
    void addWide(int runs);
    void addNoBall(int runs);
    void addBye(int runs);
    void addLegBye(int runs);
    void addWicket();
    void addLegalBall();

    double calculateRunRate() const;

    int getOvers() const;
    int getBalls() const;
    int getTotalRuns() const;
    int getTotalWickets() const;
    int getExtras() const;
    int getTargetScore() const;

    void setTargetScore(int target);

    bool isInningsOver() const;

    void displayScoreboard() const;
};

#endif
