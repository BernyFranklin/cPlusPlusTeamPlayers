// C++PlayersOnTeam.cpp
// MaxPlayers - determine if there are too many, too few, or correct number
//   of players on a team
// Frank Bernal
// CIS054 C/C++ Programming
// 09Feb2022

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // declare variables
    int teamSize;
    int playersOnTeam;
    int morePlayersNeeded;
    int extraPlayers;
    
    // Input team size
    cout << "How many players should be on the team? ";   // prompt
    cin >> teamSize;   // user input
    
    // Throw errors for illegal input like negative numbers or letters
    if (cin.fail() )   // check for non-numeric input
    {
        cout << "Illegal entry for team size" << endl;   // error message
        return 1;  // exit program and return error code = 1
    }
    if (teamSize < 1)   // check for negative numbers
    {
        cout << "Negative values are not allowed" << endl;   //error message
        return 1;   // exit program and return error code = 1
    }
    
    // Input number of players on team
    cout << "How many players are actually on the team? ";   // prompt
    cin >> playersOnTeam;   // user input
    
    // Throw errors for illegal input like negative numbers or letters
    if (cin.fail() )   // check for non numeric input
    {
        cout << "Illegal entry for players on the team" << endl;   // prompt
        return 1;   // exit program and return error code = 1
    }
    if (playersOnTeam < 1)   // check for negative numbers
    {
        cout << "Negative values are not allowed" << endl; //prompt
        return 1;   // exit program and return error code = 1
    }
    
    // Process and Output - check for correct number of players
    if (playersOnTeam < teamSize)   // not enough players
    {
        cout << "There are not enough players" << endl;   // prompt
        morePlayersNeeded = teamSize - playersOnTeam;   // compute
        cout << morePlayersNeeded << " more players are needed" << endl << endl;   // prompt
    }
    else if (playersOnTeam > teamSize)   // too many players
    {
        cout << "There are too many players" << endl;   // prompt
        extraPlayers = playersOnTeam - teamSize;   // compute
        cout << extraPlayers << " need to be eliminated from the team" << endl << endl; //prompt
    }
    else
    {
        cout << "You have the correct number of players" << endl << endl;   // prompt
    }
    return 0;  // end program with error code = 0
}   // end of int main
