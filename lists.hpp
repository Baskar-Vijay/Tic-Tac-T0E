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
vector <vector<int>> winScenarios = {{1,4,7}, {2,5,8}, {3,6,9}, {1,5,9}, {3,5,7}};