#include "devicebaseclass.h"
#include <iostream>

using namespace std;

DeviceBaseClass::DeviceBaseClass() {

};

void DeviceBaseClass::setDeviceID() {
    cin >> deviceID;
}
short DeviceBaseClass::getDeviceID() {
    return deviceID;
}
