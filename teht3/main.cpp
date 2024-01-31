#include <chef.h>
#include <italianchef.h>
#include <iostream>
using namespace std;

int main()
{

    ItalianChef ItalianChef("Mario", 250, 100);
    Chef chef1("Seppo");
    Chef chef2("Ismo");

    chef1.makeSalad();

    cout << "Chef " << ItalianChef.getName();
    ItalianChef.makePasta();
    chef2.makeSoup();





    return 0;
}
