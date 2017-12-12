#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

string shuffleLetters(string mysteryWord)
{
    int letterPosition(0);
    string shuffledWord;

    while(mysteryWord.size() != 0)
    {
        letterPosition = rand() % mysteryWord.size();
        shuffledWord += mysteryWord[letterPosition];
        mysteryWord.erase(letterPosition, 1);
    }

    return shuffledWord;
}

void multipleCoutEndl(int const& number)
{
    for (int i(0); i < number; i++)
    {
        cout << "\n";
    }
}

double tryAverage(vector<int> const& tryByWin)
{
    double average(0.);
    for (int i(0); i < tryByWin.size(); i++)
    {
        average += tryByWin[i];
    }

    return average/tryByWin.size();
}
