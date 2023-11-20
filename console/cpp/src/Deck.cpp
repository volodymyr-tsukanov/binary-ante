#include "Deck.h"

using namespace std;
using namespace binary;
using namespace binaryAnte;


Deck::Deck(BinaryType type){
    srand(time(0));
    deckSize = (int)type;
    deck = new int[deckSize];
    string s = Binary(type).toString();
    for(int i = 0; i < s.length(); i++) deck[i] = (int)(s[i])-48;
    top = Binary((BinaryType)((int)(type)-1));
}
Deck::~Deck(){
}


Binary Deck::getTop(){
    return top;
}


void Deck::toss(){
    srand(time(0));
    for(int i = 0; i < deckSize; i += 2) swap(deck[rand()%deckSize], deck[rand()%deckSize]);
}

void Deck::print(){
    cout << "Deck: ";
    for(int i = 0; i < deckSize; i++) cout << deck[i];
    cout << "\tTop: (10)" << top.toDec() << " = (2)" << top.toString() << endl;
}
