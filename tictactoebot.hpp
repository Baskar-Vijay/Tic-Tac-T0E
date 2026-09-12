#include  <algorithm>
#include <string>
#include "lists.hpp"

void player2bot(map<int,string>& Tictactoe) {
    // Order candidate squares by how often they appear in win scenarios
    // (center and corners are stronger than edges).
    int bestPosition = -1;
    int bestFrequency = -1;
    for (int pos = 1; pos <= 9; pos++) {
        if (Tictactoe[pos] != "-") {
            continue; // square already taken
        }
        int frequency = count(winNumbers.begin(), winNumbers.end(), pos);
        if (frequency > bestFrequency) {
            bestFrequency = frequency;
            bestPosition = pos;
        }
    }

    if (bestPosition == -1) {
        cout << "No valid moves available for the bot." << endl;
        return;
    }

    Tictactoe[bestPosition] = "O";
}