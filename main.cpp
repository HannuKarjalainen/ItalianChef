#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    Chef kokki("Gordon Ramsay");
    kokki.makeSalad();
    kokki.makeSoup();

    Italianchef kokki2("Valimaki", 250, 100);
    kokki2.makePasta();

    return 0;
}
