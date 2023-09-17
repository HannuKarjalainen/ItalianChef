#include "italianchef.h"

Italianchef::Italianchef(string s, int jauhot, int vesi):Chef(s)
{
    this->jauhot = jauhot;
    this->vesi = vesi;
}

Italianchef::~Italianchef()
{

}

string Italianchef::getName()
{
    return name;
}

void Italianchef::makePasta()
{
    cout <<"Chef "<<name<<" makes pasta with special recipe"<<endl;
    cout <<"Chef "<<name<<" uses jauhot = "<<jauhot <<endl;
    cout <<"Chef "<<name<<" uses vesi = "<<vesi<<endl;
}
