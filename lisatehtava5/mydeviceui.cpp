#include "mydeviceui.h"
#include <iostream>

using namespace std;

MyDeviceUI::MyDeviceUI() {
    objectDeviceMouse = new DeviceMouse();
    objectDeviceTouchPad = new DeviceTouchPad();
    objectDeviceDisplay = new DeviceDisplay();
}
MyDeviceUI::~MyDeviceUI() {

}
void MyDeviceUI::uiShowMenu() {
    cout<<"DEVICE MENU"<<endl;
    cout<<"==========="<<endl;
    cout<<"1: Set Mouse Information"<<endl;
    cout<<"2: Set Touch Pad Information"<<endl;
    cout<<"3: Set Display Information"<<endl;
    cout<<"4: Show Devices Information"<<endl;
    cout<<"5: Finish"<<endl;
    cout<<endl;
    cout<<"Choose: ";
}
void MyDeviceUI::uiSetMouseInformation() {
    cout<<"SET MOUSE INFORMATION"<<endl;
    cout<<"====================="<<endl;
    cout<<"Set Mouse Device ID: ";
    objectDeviceMouse->setDeviceID();
    objectDeviceMouse->setPrimaryButton();
    cout<<endl;
}
void MyDeviceUI::uiSetTouchPadInformation() {
    cout<<"SET TOUCH PAD INFORMATION"<<endl;
    cout<<"========================="<<endl;
    cout<<"Set Touch Pad Device ID: ";
    objectDeviceTouchPad->setDeviceID();
    objectDeviceTouchPad->setTouchPadSensitivity();
    cout<<endl;
}
void MyDeviceUI::uiSetDisplayInformation() {
    cout<<"SET DISPLAY INFORMATION"<<endl;
    cout<<"======================="<<endl;
    cout<<"Set Display Device ID: ";
    objectDeviceDisplay->setDeviceID();
    objectDeviceDisplay->setDisplayResolution();
    cout<<endl;
}
void MyDeviceUI::uiShowDeviceInformation() {
    cout<<"DEVICES INFORMATION"<<endl;
    cout<<"==================="<<endl;
    cout<<"Mouse Device ID: "<<objectDeviceMouse->getDeviceID()<<endl;
    if(objectDeviceMouse->getPrimaryButton() == 1) {
        cout<<"Mouse Primary Button: Left"<<endl;
    } else if(objectDeviceMouse->getPrimaryButton() == 2) {
        cout<<"Mouse Primary Button: Right"<<endl;
    }
    cout<<"Touch Pad Device ID: "<<objectDeviceTouchPad->getDeviceID()<<endl;
    if(objectDeviceTouchPad->getTouchPadSensitivity() == 1) {
        cout<<"Touch Pad Sensitivity : 1, Very Sensitive"<<endl;
    } else if(objectDeviceTouchPad->getTouchPadSensitivity() == 2) {
        cout<<"Touch Pad Sensitivity : 2, Sensitive"<<endl;
    } else if(objectDeviceTouchPad->getTouchPadSensitivity() == 3) {
        cout<<"Touch Pad Sensitivity : 3, Normal"<<endl;
    } else if(objectDeviceTouchPad->getTouchPadSensitivity() == 4) {
        cout<<"Touch Pad Sensitivity : 4, Strong"<<endl;
    } else if(objectDeviceTouchPad->getTouchPadSensitivity() == 5) {
        cout<<"Touch Pad Sensitivity : 5, Very Strong"<<endl;
    }
    cout<<"Display Device ID: "<<objectDeviceDisplay->getDeviceID()<<endl;
    cout<<"Display Resolution: "<<objectDeviceDisplay->getDisplayResolution()<<endl;
    cout<<endl;
}
