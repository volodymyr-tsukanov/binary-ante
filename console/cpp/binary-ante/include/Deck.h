#ifndef DECK_H
#define DECK_H

#include <iostream>
#include "binary.h"


class Deck
{
private:
    binary deck;
    binary top;

public:
    Deck(BinaryType type);
    ~Deck();

    void print();
};

#endif // DECK_H
