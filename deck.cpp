#include "card.h"
#include "deck.h"
#include <vector>
#include <string>

using namespace std;

void Deck::add_card(Card &c)
{
    deck.push_back(c);
}

void Deck::shuffle() const
{
     
}

vector<Card> Deck::deal(int n)
{
    for(int i = 0; i < n; i++)
    {
        deck[i].print();
    }
}
