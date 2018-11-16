
#include "card.h"
#include <iostream>
#include <string>

using namespace std;


Card::Card(int val)
{
    m_value = val;
}

int Card::get_value()
{
    return m_value;
}

string Card::get_suit()
{
    return m_suit;
}

void Card::print()
{
    cout << m_value << " of " << m_suit << endl;
}
