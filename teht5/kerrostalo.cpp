#include "kerrostalo.h"
#include <iostream>

using namespace std;

Kerrostalo::Kerrostalo() {
    eka = new Katutaso();
    toka = new Kerros();
    kolmas = new Kerros();
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}
double Kerrostalo::laskeKulutus(double hinta) {
    double talon_kulutus = eka->laskeKulutus(hinta) + toka->laskeKulutus(hinta) + kolmas->laskeKulutus(hinta);
    cout<<"Kerrostalon kulutus = "<< talon_kulutus<<endl;
    return talon_kulutus;
}
