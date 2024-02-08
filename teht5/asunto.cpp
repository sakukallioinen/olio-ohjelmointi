#include "asunto.h"
#include <iostream>

using namespace std;

Asunto::Asunto() {
    cout << "Asunto luotu" << endl;
}

void Asunto::maarita(int asuk, int neli) {
    asukasMaara = asuk;
    neliot = neli;
    cout << "Asunto maaritetty. Asukkaita= " << asukasMaara << " ja nelioita= " << neliot << endl;

}

double Asunto::laskeKulutus(double hinta) {
    double kulutus = hinta * asukasMaara * neliot;
    //cout << "Kulutus on: " << kulutus << " kun hinta= " << hinta << endl;
    return kulutus;
}
