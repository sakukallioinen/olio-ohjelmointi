#include "devicemouse.h"
#include <iostream>

using namespace std;

DeviceMouse::DeviceMouse() {

}
void DeviceMouse::setPrimaryButton() {
    primaryButton = 0; //nollaa napin jotta se voidaan tarvittaessa syöttää uudestaan
    while(primaryButton != 1 && primaryButton != 2) { //jos annetaan joku muu luku kuin 1 tai 2, pyytää syöttämään uudestaan
    cout<<"Set Mouse PrimaryButton: ";
    cin>>primaryButton;
    }
}
short DeviceMouse::getPrimaryButton() {
    return primaryButton;
}
