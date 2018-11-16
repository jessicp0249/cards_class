
#include "card.h"
#include <iostream>
#include <string>

using namespace std;


Card::Card(int val)
{
    m_id = val;
}

int Card::get_value()
{
    m_value = m_id % 13;
    return m_value;
}

string Card::get_suit()
{
    int i = m_id / 13;
    if(i = 1)
    {
        m_suit = "Clubs";
    } else if (i = 2)
    {
        m_suit = "Spades";
    } else if (i = 3)
    {
        m_suit = "Hearts";
    } else 
    {
        m_suit = "Diamonds";
    }
        return m_suit;
}

void Card::print()
{
    cout << m_value << " of " << m_suit << endl;
}
