#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"


class Italianchef:public Chef
{
public:
    Italianchef(string, int, int);
    ~Italianchef();
    string getName();
    void makePasta();
private:
    int vesi = 100;
    int jauhot = 250;
};

#endif // ITALIANCHEF_H
