
#include "card.h"
#include <iostream>
#include <string>

using namespace std;


Card::Card(int val)
{
    m_id = val;     // Initialize card id with given value
    set_suit();     // Initilize card suit based on id
}

string Card::get_suit()     // returns card suit
{
    return m_suit;
}

int Card::get_value()   // returns card value
{
    m_value = m_id % 13;
    return m_value;
}

void Card::set_suit()   // Calculates card suit based on id
{
    int i = m_id / 13;

    if(i = 1)
        m_suit = "Clubs";
    else if (i = 2)
        m_suit = "Spades";
    else if (i = 3)
        m_suit = "Hearts";
    else 
        m_suit = "Diamonds";
}

void Card::print() // prints card value and suit
{
    if(m_value == 1)
    cout << "Ace of " << m_suit << endl;
    else if(m_value < 11)
    cout << m_value << " of " << m_suit << endl;    // cards from 2 to 10
    else if(m_value == 11)
    cout << "Jack of " << m_suit << endl;
    else if(m_value == 12)
    cout << "Queen of " << m_suit << endl;
    else if(m_value == 13)
    cout << "King of " << m_suit << endl;
    else if(m_value > 13)
    cout << "That is not a valid card. You are banned from the casino." << endl;

}
