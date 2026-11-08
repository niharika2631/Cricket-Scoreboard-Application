
#include <iostream>
#include <string>
#include <limits>

#include "../include/team.h"
#include "../include/match.h"

using namespace std;

// Function to safely read an integer
int getInteger(string message) {
    int value;

    while (true) {
        cout << message;

        if (cin >> value) {
            return value;
        }

        cout << "Invalid input! Please enter a number." << endl;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

// Display the main menu
void displayMenu() {
    cout << "\n========== CRICKET SCOREBOARD MENU ==========" << endl;
    cout << "1. Record Runs" << endl;
    cout << "2. Record Wicket" << endl;
    cout << "3. Record Wide" << endl;
    cout << "4. Record No Ball" << endl;
    cout << "5. Record Bye" << endl;
    cout << "6. Record Leg Bye" << endl;
    cout << "7. Display Current Scoreboard" << endl;
    cout << "8. Start Second Innings" << endl;
    cout << "9. Display Match Details" << endl;
    cout << "10. Display Match Result" << endl;
    cout << "0. Exit" << endl;
    cout << "============================================" << endl;
}

int main() {
    string team1Name, team2Name;

    cout << "============================================" << endl;
    cout << "       CRICKET MATCH SCOREBOARD             " << endl;
    cout << "============================================" << endl;

    // Get team names
    cout << "\nEnter first team name: ";
    getline(cin, team1Name);

    cout << "Enter second team name: ";
    getline(cin, team2Name);

    // Get maximum overs
    int overs = getInteger("Enter number of overs: ");

    while (overs <= 0) {
        cout << "Overs must be greater than zero." << endl;
        overs = getInteger("Enter number of overs: ");
    }

    // Create Team objects
    Team team1(team1Name);
    Team team2(team2Name);

    // Add sample players to Team 1
    team1.addBatsman(Batsman("Player 1", 1));
    team1.addBatsman(Batsman("Player 2", 2));
    team1.addBowler(Bowler("Bowler 1", 3));

    // Add sample players to Team 2
    team2.addBatsman(Batsman("Player 3", 4));
    team2.addBatsman(Batsman("Player 4", 5));
    team2.addBowler(Bowler("Bowler 2", 6));

    // Create Match object
    Match match(team1, team2, overs);

    // Start the match
    match.startMatch();

    int choice;
    bool running = true;

    while (running) {

        // Automatically display result if second innings ends
        if (match.isMatchCompleted()) {
            match.displayResult();
            break;
        }

        displayMenu();

        choice = getInteger("Enter your choice: ");

        switch (choice) {

            case 1: {
                int runs = getInteger("Enter runs (0-6): ");

                if (runs >= 0 && runs <= 6) {
                    match.recordRuns(runs);
                    match.recordLegalBall();
                    cout << "Runs recorded successfully!" << endl;
                }
                else {
                    cout << "Invalid runs! Enter a value from 0 to 6." << endl;
                }
                break;
            }

            case 2:
                match.recordWicket();
                match.recordLegalBall();
                cout << "Wicket recorded!" << endl;
                break;

            case 3: {
                int runs = getInteger(
                    "Enter total wide extras (minimum 1): ");

                if (runs >= 1) {
                    match.recordWide(runs);
                    cout << "Wide recorded!" << endl;
                }
                else {
                    cout << "Invalid wide runs!" << endl;
                }
                break;
            }

            case 4: {
                int runs = getInteger(
                    "Enter total no-ball extras (minimum 1): ");

                if (runs >= 1) {
                    match.recordNoBall(runs);
                    cout << "No ball recorded!" << endl;
                }
                else {
                    cout << "Invalid no-ball runs!" << endl;
                }
                break;
            }

            case 5: {
                int runs = getInteger("Enter bye runs: ");

                if (runs >= 0) {
                    match.recordBye(runs);
                    match.recordLegalBall();
                    cout << "Bye recorded!" << endl;
                }
                else {
                    cout << "Runs cannot be negative!" << endl;
                }
                break;
            }

            case 6: {
                int runs = getInteger("Enter leg-bye runs: ");

                if (runs >= 0) {
                    match.recordLegBye(runs);
                    match.recordLegalBall();
                    cout << "Leg bye recorded!" << endl;
                }
                else {
                    cout << "Runs cannot be negative!" << endl;
                }
                break;
            }

            case 7:
                match.getCurrentScoreboard().displayScoreboard();
                break;

            case 8:
                match.startSecondInnings();
                break;

            case 9:
                match.displayMatchDetails();
                break;

            case 10:
                match.displayResult();
                break;

            case 0:
                cout << "\nThank you for using Cricket Scoreboard!" << endl;
                running = false;
                break;

            default:
                cout << "Invalid choice! Please select a valid option." << endl;
        }
    }

    return 0;
}
