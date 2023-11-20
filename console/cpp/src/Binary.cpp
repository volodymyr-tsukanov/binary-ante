#include "Binary.h"

using namespace binary;
using namespace std;


Binary::Binary(BinaryType type, int dec){
    this->type = type;
    setValue(dec);
}
Binary::Binary(int dec){
    type = BinaryType::bin8;
    setValue(dec);
}
Binary::Binary(BinaryType type){
    this->type = type;
    setValue(randRange(0, pow(2, (int)type)));
}


int Binary::randRange(int min, int max){
    return min + (rand() % (max+1));
}


void Binary::setType(BinaryType type){
    this->type = type;
}
void Binary::setValue(int dec){
    int max = pow(2, (int)type);
    if(dec < max){
        value = dec;
    } else value = dec % (max-1);
}


int Binary::toDec(){
    return value;
}

string Binary::toString(){
    string sBin = "";

    int number = value;
    while(number > 0){
        sBin = to_string(number%2) + sBin;
        number /= 2;
    }
    while(sBin.length() < (int)type) sBin = "0" + sBin;

    return sBin;
}
