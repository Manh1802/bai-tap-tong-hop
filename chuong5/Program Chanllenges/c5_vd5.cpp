// This program calculates the number of soccer teams
 // that a youth league may create from the number of
 // available players. Input validation is demonstrated
 // with while loops.
#include <iostream>
using namespace std;

int main() {
    const int MIN_PLAYERS = 9;
    const int MAX_PLAYERS = 15;

    int players;
    int teamPlayers;
    int numTeams;
    int leftOver;

    cout << "How many players do you want per team? ";
    cin >> teamPlayers;

    while (teamPlayers < MIN_PLAYERS || teamPlayers > MAX_PLAYERS) {
        cout << "You should have at least " << MIN_PLAYERS
             << " but no more than " << MAX_PLAYERS << " players per team.\n";
        cout << "How many players do you want per team? ";
        cin >> teamPlayers;
    }

    cout << "How many players are available? ";
    cin >> players;

    while (players <= 0) {
        cout << "Please enter 0 or greater: ";
        cin >> players;
    }

    numTeams = players / teamPlayers;
    leftOver = players % teamPlayers;

    cout << "There will be " << numTeams << " teams with "
         << leftOver << " players left over.\n";

    return 0;
}
