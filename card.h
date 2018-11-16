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
<<<<<<< HEAD
        string get_suit;
=======
        string get_suit();
>>>>>>> c308f28b08dc3787ad3e6d8385310c82ec1d2659
    
        void print();

    private:
        int m_value;
        string m_suit;

};
<<<<<<< HEAD
=======

#endif
>>>>>>> c308f28b08dc3787ad3e6d8385310c82ec1d2659
