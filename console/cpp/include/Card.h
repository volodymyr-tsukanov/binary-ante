#ifndef CARD_H
#define CARD_H

#include "Binary.h"
#include "BinaryType.h"
#include "Identifier.h"


namespace binaryAnte{
class Card {
private:
    long id;
    binary::Binary value;

public:
    Card();
    Card(binary::BinaryType type);
    Card(binary::BinaryType type, binaryAnte::Identifier& identifier);
    ~Card();

    long getId();

    std::string toString();
};
}

#endif // CARD_H
