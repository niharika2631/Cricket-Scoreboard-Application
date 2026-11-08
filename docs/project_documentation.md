\# CRICKET MATCH SCOREBOARD APPLICATION

\## Project Documentation



\### 1. Introduction

The Cricket Match Scoreboard Application is developed using C++ to manage basic cricket match scoring through a console interface.



\### 2. System Modules



| Module | Description |

|---|---|

| Player | Base class for cricket players |

| Batsman | Maintains batting statistics |

| Bowler | Maintains bowling statistics |

| Team | Stores team information and players |

| Scoreboard | Maintains runs, wickets, overs, and extras |

| Extras | Tracks wide, no-ball, bye, and leg-bye runs |

| Match | Manages innings and match results |

| Main | Provides the menu-driven interface |



\### 3. Class Relationships



Player is the parent class.



\- Batsman inherits from Player.

\- Bowler inherits from Player.

\- Team contains collections of Batsman and Bowler objects.

\- Match manages two Team objects and two Scoreboard objects.



\### 4. Score Calculations



\*\*Run Rate:\*\*



Run Rate = Total Runs / Overs Completed



For example, if a team scores 60 runs in 10 overs:



Run Rate = 60 / 10 = 6.00



\*\*Strike Rate:\*\*



Strike Rate = (Runs Scored / Balls Faced) × 100



\*\*Bowling Economy:\*\*



Economy Rate = Runs Conceded / Overs Bowled



\### 5. Application Workflow



1\. Enter the names of two teams.

2\. Enter the maximum number of overs.

3\. Start the match.

4\. Record runs, wickets, and extras.

5\. Display the current scoreboard.

6\. Complete the first innings.

7\. Start the second innings.

8\. Display the match result.



\### 6. Compilation



```bash

g++ -std=c++17 -Wall -Wextra -Iinclude src/main.cpp src/player.cpp src/batsman.cpp src/bowler.cpp src/team.cpp src/scoreboard.cpp src/extras.cpp src/match.cpp -o scoreboard.exe

```



\### 7. Execution



```bash

./scoreboard.exe

```



\### 8. Conclusion



The application demonstrates the use of classes, objects, encapsulation, inheritance, abstraction, and polymorphism in C++. It provides a foundation for developing a more complete cricket score management system.

