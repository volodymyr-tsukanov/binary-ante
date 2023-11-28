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
    Binary(std::string bin);
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

    static void revert(Binary& b);
    static void addOne(Binary& b);
    static Binary add(Binary b1, Binary b2);
    static Binary sub(Binary b1, Binary b2);
};
}

#endif // BINARY_H
