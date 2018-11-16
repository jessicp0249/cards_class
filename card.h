#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>

using namespace std;

class Card
{
    public:
        Card();
        Card(int val);

        int get_value();
        string get_suit();
    
        void print();

    private:
        int m_id;
        int m_value;
        string m_suit;

};

#endif
