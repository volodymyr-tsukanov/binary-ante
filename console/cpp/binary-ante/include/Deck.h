#ifndef DECK_H
#define DECK_H

#include <iostream>
#include "Binary.h"
#include "BinaryType.h"


class Deck
{
private:
    binary::Binary deck;
    binary::Binary top;

public:
    Deck(binary::BinaryType type);
    ~Deck();

    void print();
};

#endif // DECK_H
