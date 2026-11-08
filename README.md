# 🏏 Cricket Match Scoreboard Application

## 1. Introduction

The **Cricket Match Scoreboard Application** is a console-based project developed using C++. It is designed to manage and display cricket match scores, including runs, wickets, overs, extras, and match results.

The project demonstrates important Object-Oriented Programming (OOP) concepts and provides a simple way to simulate a cricket match.

## 2. Objectives

- To develop a cricket scoreboard using C++.
- To understand and implement OOP concepts.
- To calculate runs, wickets, overs, and run rate.
- To manage two teams and their innings.
- To display the final match result.

## 3. Features

- Team creation and player details.
- Recording batsman runs.
- Recording wickets.
- Handling wide balls and no-balls.
- Recording byes and leg-byes.
- Automatic over calculation.
- Run-rate calculation.
- Two-innings match simulation.
- Target score calculation.
- Final match result display.

## 4. OOP Concepts Used

| Concept | Application |
|---|---|
| Encapsulation | Data members and member functions in classes |
| Inheritance | Batsman and Bowler inherit from Player |
| Abstraction | Abstract Player class |
| Polymorphism | Virtual functions and function overriding |
| Classes and Objects | Player, Team, Match, and Scoreboard |

## 5. Technologies Used

- Programming Language: C++
- Compiler: GCC (g++)
- IDE/Editor: Visual Studio Code or any C++ editor
- Version Control: Git
- Repository Hosting: GitHub

## 6. Project Structure

```text
Cricket-Scoreboard-Application/
│
├── include/
│   ├── player.h
│   ├── batsman.h
│   ├── bowler.h
│   ├── team.h
│   ├── scoreboard.h
│   ├── extras.h
│   └── match.h
│
├── src/
│   ├── main.cpp
│   ├── player.cpp
│   ├── batsman.cpp
│   ├── bowler.cpp
│   ├── team.cpp
│   ├── scoreboard.cpp
│   ├── extras.cpp
│   └── match.cpp
│
├── tests/
│   └── test_scoreboard.cpp
│
├── docs/
│   └── project_documentation.md
│
├── PROJECT_CHARTER.md
├── CMakeLists.txt
├── README.md
└── .gitignore
```

## 7. Requirements

- C++ compiler (GCC or MinGW).
- Git (optional, for version control).
- Windows, Linux, or macOS.

## 8. How to Compile and Run

Open Git Bash or a terminal in the project directory.

Compile the application:

```bash
g++ -std=c++17 src/*.cpp -o cricket_scoreboard.exe
```

Run on Windows/Git Bash:

```bash
./cricket_scoreboard.exe
```

## 9. Testing

The project includes a scoreboard test program with 10 test cases covering:

- Run calculation.
- Wide and no-ball extras.
- Bye and leg-bye calculations.
- Wicket counting.
- Over calculation.
- Run-rate calculation.
- Innings completion.

All 10 test cases passed during testing.

To compile and run the tests:

```bash
g++ -std=c++17 tests/test_scoreboard.cpp src/scoreboard.cpp -o test_scoreboard.exe
./test_scoreboard.exe
```

## 10. Future Enhancements

- Support complete player statistics.
- Improve cricket scoring rules.
- Add ball-by-ball commentary.
- Store match history in files.
- Develop a graphical user interface.
- Support different cricket formats.

## 11. Conclusion

The Cricket Match Scoreboard Application demonstrates the practical implementation of C++ and Object-Oriented Programming concepts. It provides basic cricket match scoring functionality and helps develop programming, problem-solving, and software development skills.

## 12. Author

**Developed as a C++ Object-Oriented Programming project.**

GitHub Repository: https://github.com/niharika2631/Cricket-Scoreboard-Application
