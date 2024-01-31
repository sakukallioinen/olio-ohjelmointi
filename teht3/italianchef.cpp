#include "italianchef.h"
#include <iostream>

using namespace std;

ItalianChef::ItalianChef(string n, int j, int v) : Chef(n){

    jauhot = j;
    vesi = v;
}

void ItalianChef::makePasta() {
    cout << " makes pasta with special recipe" << endl;
    cout << "Chef " << name << " uses jauhot = " << jauhot << endl;
    cout << "Chef " << name << " uses vesi = " << vesi << endl;


}
string ItalianChef::getName() {
    return name;
}
