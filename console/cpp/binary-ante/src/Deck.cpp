#include "Deck.h"

using namespace std;


Deck::Deck(BinaryType type){
    deck = binary(type);
    top = binary(type-1);
}
Deck::~Deck(){
}


void Deck::print(){
    cout << "Deck: (10)" << deck.toDec() << " = (2)" << deck.toString() << "\tTop: (10)" << top.toDec() << " = (2)" << top.toString() << endl;
    cout << endl;
}
