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
    void setValue(int dec, bool enlarge = false);

    int toDec();
    std::string toString();
    Binary& clone();


    static void reverse(Binary& b){
        int number = b.value, newValue = 0;
        for(int i = 0; i < (int)b.type; i++){
            if(number%2 == 1) newValue += pow(2, (int)(b.type)-1-i);
            number /= 2;
        }
        b.setValue(newValue);
    }
    static void revert(Binary& b){
        int number = b.value, newValue = 0;
        for(int i = 0; i < (int)b.type; i++){
            if(number%2 == 0) newValue += pow(2, i);
            number /= 2;
        }
        b.setValue(newValue);
    }
    static void addOne(Binary& b){
        b.setValue(b.value+1, true);
    }
    static Binary add(Binary b1, Binary b2){}
    static Binary sub(Binary b1, Binary b2){}
};
}

#endif // BINARY_H
