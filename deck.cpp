#include "card.h"
#include "deck.h"
#include <vector>
#include <string>

using namespace std;

void Deck::add_card(Card &c)
{
    deck.push_back(c);
}

void Deck::shuffle()
{
    int remaining = deck.size();
    int pos;

    for(int i=0; i<deck.size(); i++)
    {
        pos = rand() % remaining -1;
        deck.push_back(deck[pos]);

        for(int j = pos; j < deck.size() - 1; j++)
            deck[pos] = deck[pos + 1];
        deck.pop_back();
        remaining--;
    }
}

vector<Card> Deck::deal(int n)
{
    for(int i = 0; i < n; i++)
    {
        deck[i].print();
    }
}
