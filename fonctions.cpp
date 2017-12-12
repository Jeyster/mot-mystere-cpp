#include <iostream>
#include <string>
#include <cstdlib>

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
