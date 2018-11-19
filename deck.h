#ifndef DECK_H
#define DECK_H
#include <vector>
#include <string>
#include "card.h"

using namespace std; //initialize constructors for deck part of program

class Deck
{
public:
    void add_card(Card &c);
    void shuffle();
    vector<Card> deal(int n);

private:
    vector<Card> deck;

};

#endif
