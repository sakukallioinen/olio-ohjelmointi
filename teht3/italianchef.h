#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(std::string n, int j, int v);

    std::string getName();
    void makePasta();

private:
    int vesi;
    int jauhot;
};

#endif // ITALIANCHEF_H
