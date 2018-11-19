#include "card.h"
#include "deck.h"
#include <vector>
#include <string>

using namespace std;

void Deck::add_card(Card c)     // add given card to bottom of deck
{
    deck.push_back(c);
}

void Deck::shuffle() // rand function for shuffling deck
{
    int remaining = deck.size();    // cards left to shuffle
    int pos;    // current position

    for(int i=0; i<deck.size(); i++)
    {
        pos = rand() % remaining -1;    // choose a random card from remaining
        deck.push_back(deck[pos]);  // copy given card to bottom of deck

        for(int j = pos; j < (deck.size() - 1); j++)    // shift cards up until both copies of given card are at bottom
            deck[pos] = deck[pos + 1];

        deck.pop_back();    // remove duplicate card
        remaining--;    
    }
}

vector<Card> Deck::deal(int n) // print n number of cards from top of deck
{
    for(int i = 0; i < n; i++)
    {
        deck[i].print();
    }
}
