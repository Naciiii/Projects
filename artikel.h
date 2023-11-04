#ifndef ARTIKEL_H
#define ARTIKEL_H
#include <iostream>

class Artikel
{
public:
    Artikel(std::string bezeichnung,int artikelnummer,int anzahlAnEinheiten,float gewichtJeEinheit);

    float getGewicht() const;



private:

    std::string bezeichnung;
    int artikelnummer;
    int anzahlAnEinheiten;
    float gewichtJeEinheit;

};

#endif // ARTIKEL_H
