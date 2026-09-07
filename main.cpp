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
     while (not gameOver) {
     board(Tictactoe);
     cout << "Enter the Position you want to play (1-9): ";
     int position;
     cin >> position;

     // Add game logic here
    
     switch(player)
     {
     case 1:
        Tictactoe[position] = "X";
        player += 1;
        break;
     case 2:
        Tictactoe[position] = "O";
        player -= 1;
        break;
     }
     for(int i =0; i < winScenarios.size(); i++)
     {
        if(Tictactoe[winScenarios[i][0]] == Tictactoe[winScenarios[i][1]] && Tictactoe[winScenarios[i][1]] == Tictactoe[winScenarios[i][2]] && Tictactoe[winScenarios[i][0]] != "-")
        {
            gameOver = true;
            cout << "Player " << player << " wins!" << endl;
            board(Tictactoe);
            break;
        }
     }
     
    }
}