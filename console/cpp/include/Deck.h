#ifndef DECK_H
#define DECK_H

#include "Card.h"


namespace binaryAnte {
class Deck {
private:
    int id, deckSize;
    Card* deck;

public:
    Deck(int deckSize, binaryAnte::Identifier& identifier);
    Deck(int deckSize, binary::BinaryType cardType, binaryAnte::Identifier& identifier);
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
