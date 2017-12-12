#include <iostream>
#include <string>
#include <ctime>
#include "fonctions.h"

using namespace std;

int main()
{
    string mysteryWord, shuffledWord, word;

    //1 : On demande de saisir un mot
    cout << "Saisissez un mot : ";
    cin >> mysteryWord;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" ;

    //2 : On m�lange les lettres du mot
    srand(time(0));
    shuffledWord = shuffleLetters(mysteryWord);

    //3 : On demande � l'utilisateur quel est le mot myst�re
    do
    {
        cout << "Quel est le mot mystere ? " << shuffledWord << endl;
        cin >> word;
        if (word != mysteryWord)
        {
            cout << "Ce n'est pas le bon mot !" << endl << endl;
        }
    }while(word != mysteryWord);

    cout << "Bravo !" << endl;

    return 0;
}
