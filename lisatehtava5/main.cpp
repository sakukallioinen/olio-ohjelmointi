#include <iostream>
#include "mydeviceui.h"

using namespace std;

int main()
{
    int choice = 0;
    MyDeviceUI UI;

    while(choice != 5) {
        UI.uiShowMenu();
        cin>>choice;
        cout<<endl;

        switch(choice) {
            case 1:
                UI.uiSetMouseInformation();
                break;
            case 2:
                UI.uiSetTouchPadInformation();
                break;
            case 3:
                UI.uiSetDisplayInformation();
                break;
            case 4:
                UI.uiShowDeviceInformation();
                break;
            case 5:
                cout<<"Bye Bye!"<<endl; //lopettaa ohjelman
                break;
            default:
                cout<<"Invalid Choice. Try Again!"<<endl;
                cout<<endl;
                break;
        }
    }
    return 0;
}
