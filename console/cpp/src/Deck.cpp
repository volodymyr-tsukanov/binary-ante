#include "Deck.h"

using namespace std;
using namespace binary;
using namespace binaryAnte;


Deck::Deck(int deckSize){
    this->deckSize = deckSize;

    srand(time(0));
    deck = new Card[deckSize];
    for(int i = 0; i < deckSize; i++) deck = new Card();
}

Deck::~Deck(){
    delete [] deck;
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
    for(int i = 0; i < deckSize; i++) cout << deck[i].toString();
    cout << "\tTop: (10)" << top.toDec() << " = (2)" << top.toString() << endl;
}
