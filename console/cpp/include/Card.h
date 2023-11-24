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
    binary::Binary value;

public:
    Card();
    ~Card();

    std::string toString();
};
}

#endif // CARD_H
