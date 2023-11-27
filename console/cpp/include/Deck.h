#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <ctime>
#include "Card.h"


namespace binaryAnte {
class Deck {
private:
    int deckSize;
    Card* deck;

public:
    Deck(int deckSize);
    Deck(int deckSize, binary::BinaryType cardType);
    ~Deck();

    int getSize();
    Card getTop();
    Card get(unsigned int position);

    void toss();
    void print();
    void clear();
};
}

#endif // DECK_H
