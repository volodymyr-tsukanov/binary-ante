#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <ctime>
#include "Card.h"


namespace binaryAnte {
class Deck {
private:
    int deckSize, position;
    Card* deck;
    binary::Binary top;

public:
    Deck(int deckSize);
    ~Deck();

    int getSize();
    int getPosition();
    binary::Binary getTop();

    void toss();
    void print();
};
}

#endif // DECK_H
