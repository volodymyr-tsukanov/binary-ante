#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <ctime>
#include "Binary.h"
#include "BinaryType.h"


namespace binaryAnte {
class Deck {
private:
    int deckSize;
    int* deck;
    binary::Binary top;

public:
    Deck(binary::BinaryType type);
    ~Deck();

    binary::Binary getTop();

    void toss();
    void print();
};
}

#endif // DECK_H
