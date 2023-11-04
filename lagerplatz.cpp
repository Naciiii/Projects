#include "lagerplatz.h"
using namespace std;
#include <iostream>

LagerPlatz::LagerPlatz(int id, double max_Gewicht)
{
    this->id=id;
    this->max_Gewicht = max_Gewicht;
}

bool LagerPlatz::einlagern(const Artikel & artikel)
{
    for(size_t i=0;i<Lagerplaetze.size();++i){
        if(artikel.getGewicht()<Lagerplaetze.at(i).getGewicht()){
            Lagerplaetze.push_back(artikel);
            return true;
        }

    }
    return false;

}
