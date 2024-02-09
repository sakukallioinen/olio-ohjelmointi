#include "devicedisplay.h"
#include <iostream>

using namespace std;

DeviceDisplay::DeviceDisplay() {

}
void DeviceDisplay::setDisplayResolution() {
    displayResolution = 0; //nollaa resoluution jotta se voidaan tarvittaessa syöttää uudestaan
    while(displayResolution < 1 || displayResolution > 10) { //jos annetaan joku kuin luku väliltä 1-10, pyytää syöttämään uudestaan
    cout<<"Set Display Resolution: ";
    cin>>displayResolution;
    }
}
short DeviceDisplay::getDisplayResolution() {
    return displayResolution;
}
