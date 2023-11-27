#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <ctime>
#include "Binary.h"
#include "BinaryType.h"


namespace binaryAnte{
class Card
{
private:
    long id;
    binary::Binary value;

public:
    Card();
    Card(binary::BinaryType type);
    ~Card();

    long getId();

    std::string toString();
};
}

#endif // CARD_H
