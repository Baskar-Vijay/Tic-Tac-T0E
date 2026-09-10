#include <iostream>
#include <map>
#include <vector>
#include "lists.hpp"
using namespace std ;
void board(map<int, string> Tictactoe) {
    for (int i = 1; i <= 9; i++) {
        cout << Tictactoe.at(i) << " ";
        if (i % 3 == 0) {
            cout << endl;
        }
    }
}
void cheatingdetected(int position, map<int, string> Tictactoe) {
    while (Tictactoe[position] == "X" or Tictactoe[position] == "O") {
            cout << "Position already taken by Player 1. Please choose another position." << endl;
            cin.clear();
            cin.ignore(); 
            // Clear the error state of cin
            cout << "Enter the Position you want to play (1-9): ";
            cin >> position;
            continue; // Skip to the next iteration of the loop
        }
}

bool gameOver = false;
int player = 1;

 /* vector<vector<int>> winScenarios = {{1,4,7}, {2,5,8}, {3,6,9}, {1,5,9}, {3,5,7}};
 map<int, string> Tictactoe = {
        {1, "-"},
        {2, "-"},
        {3, "-"},
        {4, "-"},
        {5, "-"},
        {6, "-"},
        {7, "-"},
        {8, "-"},
        {9, "-"}
    }; // win Scenario({1,4,7}, {2,5,8}, {3,6,9}) by straight, {1,5,9}, {3,5,7}
*/
int main() { 
     cout << "Tic Tac Toe Board" << endl;
     map <int, string > Tictactoe = ResetTictactoe;
     while (not gameOver) {
     board(Tictactoe);
     cout << "Enter the Position you want to play (1-9): ";
     try {
         int position;
         cin >> position;
         if (position < 1 || position > 9) {
             throw std::invalid_argument("Position out of bounds");
         }
         //the em dash is stored as a zero which out of the indexing format causing and error 
     switch(player)
     {
     case 1:
        cheatingdetected(position, Tictactoe);
        Tictactoe[position] = "X";
        player += 1;
        break;
     case 2:
        cheatingdetected(position, Tictactoe);
        Tictactoe[position] = "O";
        player -= 1;
        break;
     }}
     catch (const std::exception& e) {
         cout << "Invalid input. Please enter a number between 1 and 9." << endl;
         cin.clear();
         cin.ignore(); // Discard invalid input
         continue; // Skip to the next iteration of the loop
     }
     for(int i =0; i < winScenarios.size(); i++)
     {
        if(Tictactoe[winScenarios[i][0]] == Tictactoe[winScenarios[i][1]] && Tictactoe[winScenarios[i][1]] == Tictactoe[winScenarios[i][2]] && Tictactoe[winScenarios[i][0]] != "-")
        {
            gameOver = true;
            cout << "Player " << player << " wins!" << endl;
            board(Tictactoe);
             cout << "Press Enter to exit (-q to quit or -r to restart): ";  
             string temp;
             cin  >> temp;
             if (temp == "-q") {
                return 0; // Exit the program
             } else if (temp == "-r") {
                gameOver = false; // Reset the gameOver flag
                player = 1; // Reset the player to 1
               Tictactoe = ResetTictactoe; // Reset the board
             }
             else{
                return 0;
             }
            break;
        }
     }
    }
    return 0 ;
}