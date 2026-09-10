#include <map>
#include <vector>
using namespace std;

map<int, string> ResetTictactoe = {
    {1, "-"},
    {2, "-"},
    {3, "-"},
    {4, "-"},
    {5, "-"},
        {6, "-"},
        {7, "-"},
        {8, "-"},
        {9, "-"}
};
vector <vector<int>> winScenarios = {{1,4,7}, {2,5,8}, {3,6,9}, {1,5,9}, {3,5,7},{7,8,9},{4,5,6},{1,2,3}}; // win Scenario({1,4,7}, {2,5,8}, {3,6,9}) by straight, {1,5,9}, {3,5,7}
vector<int> winNumbers = {
    1,4,7, 2,5,8, 3,6,9,
    1,5,9, 3,5,7, 7,8,9,
    4,5,6, 1,2,3
};
for (int i = 1; i < winNumbers.size(); i++) {
    map <int, int > BestMove;
    BestMove[count(winNumbers.begin(), winNumbers.end(), i)] = i;
}