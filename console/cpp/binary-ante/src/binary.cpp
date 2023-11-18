#include "binary.h"

using namespace std;


/*binary::binary(){
    type = bin8;
    setValue(0);
}*/
binary::binary(BinaryType type, int dec){
    this->type = type;
    setValue(dec);
}
binary::binary(int dec){
    type = bin16;
    setValue(dec);
}
binary::binary(BinaryType type){
    this->type = type;
    setValue(randRange(0, pow(2, (int)type)));
}


int binary::randRange(int min, int max){
    return min + (rand() % (max+1));
}


void binary::setType(BinaryType type){
    this->type = type;
}
void binary::setValue(int dec){
    int max = pow(2, (int)type);
    if(dec < max){
        value = dec;
    } else value = dec % (max-1);
}


int binary::toDec(){
    return value;
}

string binary::toString(){
    string sBin = "";

    int number = value;
    while(number > 0){
        sBin = to_string(number%2) + sBin;
        number /= 2;
    }
    while(sBin.length() < (int)type) sBin = "0" + sBin;

    return sBin;
}
