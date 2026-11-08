
#ifndef BATSMAN_H
#define BATSMAN_H

#include "player.h"

class Batsman : public Player {
private:
    int runs;
    int ballsFaced;
    int fours;
    int sixes;

public:
    Batsman(string name, int jerseyNumber);

    void addRuns(int run);
    void faceBall();

    int getRuns() const;
    int getBallsFaced() const;
    int getFours() const;
    int getSixes() const;

    double calculateStrikeRate() const;

    void displayStats() const override;
};

#endif
