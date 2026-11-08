
#include "../include/player.h"

Player::Player(string n, int j) {
    name = n;
    jerseyNumber = j;
}

string Player::getName() const {
    return name;
}

int Player::getJerseyNumber() const {
    return jerseyNumber;
}

Player::~Player() {
}
