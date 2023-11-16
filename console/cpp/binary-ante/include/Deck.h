#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <ctime>


class Deck
{
private:
    int size;
    int* deck;

protected:
    void fillDeck();

public:
    const static int ZERO = 0, ONE = 1, NONE = -1;

    Deck(unsigned int size);

    void print();
};

#endif // DECK_H
