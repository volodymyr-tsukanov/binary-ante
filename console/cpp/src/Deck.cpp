#include "Deck.h"

using namespace std;
using namespace binary;


Deck::Deck(BinaryType type){
    srand(time(0));
    deck = Binary(type);
    top = Binary((BinaryType)((int)(type)-1));
}
Deck::~Deck(){
}


void Deck::print(){
    cout << "Deck: (10)" << deck.toDec() << " = (2)" << deck.toString() << "\tTop: (10)" << top.toDec() << " = (2)" << top.toString() << endl;
    cout << endl;
}
