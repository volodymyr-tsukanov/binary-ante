#include "Deck.h"

using namespace std;
using namespace binary;
using namespace binaryAnte;


Deck::Deck(BinaryType deckSize, BinaryType topSize){
    srand(time(0));

    this->deckSize = (int)deckSize;

    deck = new int[this->deckSize];
    string s = Binary(deckSize).toString();
    for(int i = 0; i < s.length(); i++) deck[i] = (int)(s[i])-48;

    if(topSize < deckSize) top = Binary(topSize);
    else top = Binary(BinaryType::bin4);
}
Deck::Deck(BinaryType deckSize){
    srand(time(0));

    this->deckSize = (int)deckSize;

    deck = new int[deckSize];
    string s = Binary(deckSize).toString();
    for(int i = 0; i < s.length(); i++) deck[i] = (int)(s[i])-48;

    if((int)(deckSize)/4 >= 4) top = Binary((BinaryType)((int)(deckSize)/4));
    else top = Binary(BinaryType::bin4);
}
Deck::~Deck(){
}


int Deck::getSize(){
    return deckSize;
}
int Deck::getPosition(){
    return position;
}
Binary Deck::getTop(){
    return top;
}


void Deck::toss(){
    srand(time(0));
    for(int i = 0; i < deckSize; i+=2) swap(deck[rand()%deckSize], deck[rand()%deckSize]);
}

void Deck::print(){
    cout << "Deck: ";
    for(int i = 0; i < deckSize; i++) cout << deck[i];
    cout << "\tTop: (10)" << top.toDec() << " = (2)" << top.toString() << endl;
}
