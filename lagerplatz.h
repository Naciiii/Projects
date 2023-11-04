#ifndef LAGERPLATZ_H
#define LAGERPLATZ_H
#include <iostream>
#include "artikel.h"
#include <vector>

class LagerPlatz
{
public:
    LagerPlatz(int id,double max_Gewicht);



    bool einlagern(const Artikel&);

private:

int id;
double max_Gewicht;
std::vector<Artikel> Lagerplaetze;

};

#endif // LAGERPLATZ_H
