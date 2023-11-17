#include "Deck.h"

using namespace std;


Deck::Deck(BinaryType type){
    this->type = type;

    deck = binary(type);
    top = binary(type-1)
}
Deck::~Deck(){
    delete deck;
    delete top;
}


void Deck::print(){
    cout << "Deck: (10)" << deck << " = (2)" << toBinary(deck) << "\tTop: (10)" << top << " = (2)" << toBinary(top) << endl;
    cout << endl;
}
