
#include "../include/scoreboard.h"
#include <iostream>
#include <cassert>

using namespace std;

int main() {
    cout << "========== SCOREBOARD TESTING ==========" << endl;

    // Create a scoreboard for a 2-over match
    Scoreboard test("India", "Australia", 2);

    // Test 1: Add normal runs
    test.addRuns(4);
    test.addRuns(2);

    assert(test.getTotalRuns() == 6);
    cout << "Test 1 Passed: Normal runs" << endl;

    // Test 2: Add wide runs
    test.addWide(2);

    assert(test.getTotalRuns() == 8);
    assert(test.getExtras() == 2);
    cout << "Test 2 Passed: Wide runs" << endl;

    // Test 3: Add no-ball runs
    test.addNoBall(1);

    assert(test.getTotalRuns() == 9);
    assert(test.getExtras() == 3);
    cout << "Test 3 Passed: No-ball runs" << endl;

    // Test 4: Add bye runs
    test.addBye(1);

    assert(test.getTotalRuns() == 10);
    assert(test.getExtras() == 4);
    cout << "Test 4 Passed: Bye runs" << endl;

    // Test 5: Add leg-bye runs
    test.addLegBye(1);

    assert(test.getTotalRuns() == 11);
    assert(test.getExtras() == 5);
    cout << "Test 5 Passed: Leg-bye runs" << endl;

    // Test 6: Add wickets
    test.addWicket();

    assert(test.getTotalWickets() == 1);
    cout << "Test 6 Passed: Wicket recording" << endl;

    // Test 7: Add legal balls
    for (int i = 0; i < 6; i++) {
        test.addLegalBall();
    }

    assert(test.getOvers() == 1);
    assert(test.getBalls() == 0);
    cout << "Test 7 Passed: Overs calculation" << endl;

    // Test 8: Calculate run rate
    assert(test.calculateRunRate() == 11.0);
    cout << "Test 8 Passed: Run rate calculation" << endl;

    // Test 9: Check innings status
    assert(!test.isInningsOver());
    cout << "Test 9 Passed: Innings continues before limit" << endl;

    // Test 10: Complete the remaining legal balls
    for (int i = 0; i < 6; i++) {
        test.addLegalBall();
    }

    assert(test.isInningsOver());
    cout << "Test 10 Passed: Innings ends after maximum overs" << endl;

    // Display final scoreboard
    test.displayScoreboard();

    cout << "\nAll 10 tests passed successfully!" << endl;

    return 0;
}
