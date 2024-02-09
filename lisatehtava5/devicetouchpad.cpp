#include "devicetouchpad.h"
#include <iostream>

using namespace std;
DeviceTouchPad::DeviceTouchPad() {

}
void DeviceTouchPad::setTouchPadSensitivity() {
    touchPadSensitivity = 0; //nollaa senssin jotta se voidaan tarvittaessa syöttää uudestaan
    while(touchPadSensitivity > 5 || touchPadSensitivity < 1) { //jos annetaan joku muu kuin luku väliltä 1-5, pyytää syöttämään uudestaan
    cout<<"Set TouchPad Sensitivity: ";
    cin>>touchPadSensitivity;
    }
}
short DeviceTouchPad::getTouchPadSensitivity() {
    return touchPadSensitivity;
}
