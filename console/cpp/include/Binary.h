#ifndef BINARY_H
#define BINARY_H

#include <iostream>
#include <cmath>
#include "BinaryType.h"


namespace binary {
class Binary {
private:
    BinaryType type;
    int value;

protected:
    randRange(int min, int max);

public:
    Binary();
    Binary(BinaryType type, int dec);
    Binary(int dec);
    Binary(BinaryType type);
    ~Binary();

    Binary operator+(Binary& rhs);
    Binary operator-(Binary& rhs);
    Binary operator*(Binary& rhs);
    Binary operator/(Binary& rhs);

    void setType(BinaryType type);
    void setValue(int dec);

    int toDec();
    std::string toString();
};
}

#endif // BINARY_H
