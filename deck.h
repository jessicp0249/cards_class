#ifndef "DECK_H"
#define "DECK_H"
#include <vector>
#include <string>
#include "card.h"

using namespace std;

class Deck
{
public:
    void Deck::add_card(const Card &c);
    void Deck::shuffle() const;
    vector<Card> Deck::deal(int n);

private:
    vector<Card> deck;

};

#endif
