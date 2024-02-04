#include "katutaso.h"
#include <iostream>

using namespace std;

Katutaso::Katutaso() {
    cout << "Katutaso luotu" << endl;
}
void Katutaso::maaritaAsunnot() {
    cout<<"Maaritetaan 2kpl katutason asuntoja"<<endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja"<<endl;
    Kerros::maaritaAsunnot();
}
double Katutaso::laskeKulutus(double hinta) {
    double kulutus_katutaso = as1.laskeKulutus(hinta) + as2.laskeKulutus(hinta) + Kerros::laskeKulutus(hinta);
   /* double kulutus_total = kulutus_katutaso + Kerros::laskeKulutus(hinta);
    cout<<"Katutason ja perityn kerroksen kulutus on "<<kulutus_total<<" kun hinta on= "<<hinta<<endl;
   */ return kulutus_katutaso;
}
