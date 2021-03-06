#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>

using namespace std;

class Card //initialize constructors for Card part of program
{
    public:
        Card();
        Card(int val);

        string get_suit();
        int get_value();
        void set_suit();
    
        void print();

    private:
        int m_id;
        int m_value;
        string m_suit;

};

#endif
