#include "Card.h"

using namespace std;
using namespace binary;
using namespace binaryAnte;


Card::Card(){
    value = Binary();
}
Card::Card(BinaryType type){
    value = Binary(type);
}

Card::~Card(){
}


string Card::toString(){
    return value.toString();
}
