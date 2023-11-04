#include "artikel.h"



Artikel::Artikel(std::string bezeichnung, int artikelnummer, int anzahlAnEinheiten, float gewichtJeEinheit)
{
    this->bezeichnung = bezeichnung;
    this->artikelnummer = artikelnummer;
    this->gewichtJeEinheit = gewichtJeEinheit;
    this->anzahlAnEinheiten = anzahlAnEinheiten;
}

float Artikel::getGewicht() const
{
    float gesamtGewicht;
     gesamtGewicht = anzahlAnEinheiten * gewichtJeEinheit ;
     return  gesamtGewicht;
}

