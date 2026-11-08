
#ifndef EXTRAS_H
#define EXTRAS_H

class Extras {
private:
    int wideRuns;
    int noBallRuns;
    int byeRuns;
    int legByeRuns;

public:
    // Constructor
    Extras();

    // Add different types of extras
    void addWide(int runs);
    void addNoBall(int runs);
    void addBye(int runs);
    void addLegBye(int runs);

    // Getter methods
    int getWideRuns() const;
    int getNoBallRuns() const;
    int getByeRuns() const;
    int getLegByeRuns() const;

    // Calculate total extras
    int calculateTotalExtras() const;

    // Display extras details
    void displayExtras() const;

    // Reset extras
    void resetExtras();
};

#endif
