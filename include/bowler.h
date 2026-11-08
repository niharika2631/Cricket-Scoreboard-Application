
#ifndef BOWLER_H
#define BOWLER_H

#include "player.h"

class Bowler : public Player {
private:
    int ballsBowled;
    int runsConceded;
    int wickets;

public:
    Bowler(string name, int jerseyNumber);

    void bowlBall();
    void addRunsConceded(int runs);
    void takeWicket();

    int getBallsBowled() const;
    int getRunsConceded() const;
    int getWickets() const;

    double calculateEconomy() const;

    void displayStats() const override;
};

#endif
