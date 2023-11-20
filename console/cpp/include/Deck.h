#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <ctime>
#include "Binary.h"
#include "BinaryType.h"


namespace binaryAnte {
class Deck {
private:
    int deckSize, position;
    int* deck;
    binary::Binary top;

public:
    Deck(binary::BinaryType deckSize, binary::BinaryType topSize);
    Deck(binary::BinaryType deckSize);
    ~Deck();

    int getSize();
    int getPosition();
    binary::Binary getTop();

    void toss();
    void print();
};
}

#endif // DECK_H
