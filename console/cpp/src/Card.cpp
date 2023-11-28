#include "Card.h"

using namespace std;
using namespace binary;
using namespace binaryAnte;


Card::Card(){
    id = time(0);
    value = Binary();
}
Card::Card(BinaryType type){
    id = time(0);
    value = Binary(type);
}
Card::Card(BinaryType type, Identifier identifier){
    id = identifier.nextId();
    value = Binary(type);
}

Card::~Card(){
}


long Card::getId(){
    return id;
}


string Card::toString(){
    return to_string(id) + ":" + value.toString();
}
