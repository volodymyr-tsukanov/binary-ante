#ifndef BINARY_H
#define BINARY_H

#include <iostream>
#include <cmath>


enum BinaryType { bin4=4, bin8=8, bin12=12, bin16=16, bin20=20, bin24=24, bin28=28, bin32=32 };


class binary
{
private:
    BinaryType type;
    int value;

protected:
    randRange(int min, int max);

public:
    binary();
    binary(BinaryType type, int dec);
    binary(int dec);
    binary(BinaryType type);
    ~binary();

    void setType(BinaryType type);
    void setValue(int dec);

    int toDec();
    std::string toString();
};

#endif // BINARY_H
