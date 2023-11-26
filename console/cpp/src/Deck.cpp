#include "Deck.h"

using namespace std;
using namespace binary;
using namespace binaryAnte;


Deck::Deck(int deckSize){
    this->deckSize = deckSize;

    srand(time(0));
    deck = new Card[deckSize];
    for(int i = 0; i < deckSize; i++) deck[i] = Card();
}
Deck::Deck(int deckSize, BinaryType cardType){
    this->deckSize = deckSize;

    srand(time(0));
    deck = new Card[deckSize];
    for(int i = 0; i < deckSize; i++) deck[i] = Card(cardType);
}

Deck::~Deck(){
    delete[] deck;
}


int Deck::getSize(){
    return deckSize;
}
int Deck::getPosition(){
    return position;
}
Card Deck::getTop(){
    return deck[0];
}


void Deck::toss(){
    srand(time(0));
    for(int i = 0; i < deckSize; i+=2) swap(deck[rand()%(deckSize-1)], deck[rand()%(deckSize-1)]);
}

void Deck::print(){
    cout << "Deck: ";
    for(int i = 0; i < deckSize; i++) cout << deck[i].toString() << " ";
    cout << "\tTop: " << deck[0].toString() << endl;
}
