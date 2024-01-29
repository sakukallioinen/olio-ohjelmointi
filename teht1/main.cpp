#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int game(int maxnum) {
    srand(time(NULL)); // käytetään aikaa siemenlukuna
    int playerNumber = 0; // alustetaan pelaajan syöttämä luku
    int randomNumber = rand() % maxnum + 1;
    int counter = 0; // laskin arvausten määrälle
    do {
        cout << "Anna luku: ";
        cin >> playerNumber;
        if(playerNumber == randomNumber) {
            cout << "Oikea vastaus" << endl;
            counter ++;
        }
        else if(playerNumber < randomNumber) {
            cout << "Oikea luku on suurempi" << endl;
            counter ++;
        }
        else if(playerNumber > randomNumber) {
            cout << "Oikea luku on pienempi" << endl;
            counter ++;
        }
    }
    while(playerNumber != randomNumber); // kysytään niin kauan kunnes randomNumber ja playerNumber mätsäävät
    return counter; //palautetaan arvausten määrä
}

int main()
{
    int x{game(20)}; // kutsutaan peli funktio sekä määritellään x:n arvoksi arvausten määrä
    cout << "Arvauksia meni: " << x << endl; // tulostetaan arvausten määrä
    return 0;
}



