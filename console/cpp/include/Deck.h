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

public:
    Deck(int deckSize);
    Deck(int deckSize, binary::BinaryType cardType);
    ~Deck();

    int getSize();
    int getPosition();
    Card getTop();

    void toss();
    void print();
};
}

#endif // DECK_H
