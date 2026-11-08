
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player {
private:
    string name;
    int jerseyNumber;

public:
    Player(string n, int j);

    string getName() const;
    int getJerseyNumber() const;

    virtual void displayStats() const = 0;

    virtual ~Player();
};

#endif
