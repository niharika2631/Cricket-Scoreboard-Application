\# Cricket Match Scoreboard Application



\## 1. Introduction



The Cricket Match Scoreboard Application is a console-based C++ project designed to manage and display cricket match scores.



It allows users to record runs, wickets, extras, and overs while displaying the current scoreboard and match results.



\## 2. Objectives



\- To develop a cricket scoreboard using C++.

\- To apply Object-Oriented Programming concepts.

\- To calculate team scores and run rates.

\- To manage batting and bowling information.

\- To display match results automatically.



\## 3. Features



\- Create two cricket teams.

\- Record runs from 0 to 6.

\- Record wickets.

\- Record wide balls and no-balls.

\- Record byes and leg-byes.

\- Calculate run rate.

\- Manage first and second innings.

\- Display the scoreboard.

\- Display the match result.



\## 4. Technologies Used



\- Programming Language: C++

\- Compiler: GCC (g++)

\- IDE / Terminal: Git Bash

\- C++ Standard: C++17



\## 5. Object-Oriented Programming Concepts



\### Encapsulation

Data members are declared private and accessed through public methods.



\### Inheritance

Batsman and Bowler classes inherit from the Player class.



\### Abstraction

Player is an abstract class containing the pure virtual function `displayStats()`.



\### Polymorphism

Batsman and Bowler provide their own implementations of `displayStats()`.



\## 6. Project Structure



```text

Cricket-Match-Scoreboard/

├── README.md

├── CMakeLists.txt

├── src/

├── include/

├── tests/

└── docs/

```



\## 7. Compilation



Run the following command from the project directory:



```bash

g++ -std=c++17 -Wall -Wextra -Iinclude src/main.cpp src/player.cpp src/batsman.cpp src/bowler.cpp src/team.cpp src/scoreboard.cpp src/extras.cpp src/match.cpp -o scoreboard.exe

```



\## 8. Execution



```bash

./scoreboard.exe

```



\## 9. Conclusion



The Cricket Match Scoreboard Application demonstrates the practical use of C++ and Object-Oriented Programming concepts. It provides a simple way to record cricket scores and manage match innings through a console-based interface.



\## 10. Future Enhancements



\- Complete individual player statistics.

\- Add player selection and team lineups.

\- Improve cricket scoring rules.

\- Store match details in files.

\- Add a graphical user interface.

