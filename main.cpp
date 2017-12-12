#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "fonctions.h"

using namespace std;

int main()
{
    string mysteryWord, shuffledWord, word;
    char stopGame;
    int numberOfGame(0), numberOfWin(0);
    vector<int> usedTryByGameWin;

    cout << "-----------------------------" << endl;
    cout << "-------- Mot Mystere --------" << endl;
    cout << "-----------------------------" << endl << endl;

    do
    {
        int remaningTry(5);

        //1 : On demande de saisir un mot
        cout << "Saisissez un mot : ";
        cin >> mysteryWord;
        multipleCoutEndl(100);

        //2 : On mélange les lettres du mot
        srand(time(0));
        shuffledWord = shuffleLetters(mysteryWord);

        //3 : On demande à l'utilisateur quel est le mot mystère
        do
        {
            cout << "Quel est le mot mystere ? " << shuffledWord << endl;
            cout << "Coups restant : " << remaningTry << endl;
            cin >> word;
            if (word != mysteryWord)
            {
                remaningTry--;
                cout << "Ce n'est pas le bon mot !" << endl << endl;
            }
        }while((word != mysteryWord) && (remaningTry > 0));

        if (remaningTry > 0)
        {
            numberOfWin++;
            usedTryByGameWin.push_back(6-remaningTry);
            cout << "Bravo !" << endl << endl;
        }
        else
        {
            cout << "Perdu..." << endl << endl;
        }
        cout << "Voulez-vous rejouer ? (O/n)" << endl;
        cin >> stopGame;
        multipleCoutEndl(2);

        numberOfGame++;
    }while(stopGame == 'O');

    cout << "Vous avez gagnez " << numberOfWin << " parties sur " << numberOfGame << "." << endl;
    if (numberOfWin > 0)
    {
        cout << "Votre moyenne est de " << tryAverage(usedTryByGameWin) << " coups par parties gagnees." << endl;
    }

    cout << endl << "-----------------------------" << endl;
    cout << "-------- Fin du jeu ---------" << endl;
    cout << "-----------------------------" << endl;

    return 0;
}
