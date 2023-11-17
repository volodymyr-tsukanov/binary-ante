#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <cmath>
#include <ctime>


class Deck
{
public:
    const static int ZERO = 0, ONE = 1, NONE = -1;
    enum Type { b8=8, b12=12, b16=16 };

private:
    Type type;
    int deck;
    int top;

protected:
    int randRange(int min, int max);

    void fillDeck();

public:
    Deck(Type type);

    std::string toBinary(int number);

    void print();
};

#endif // DECK_H
