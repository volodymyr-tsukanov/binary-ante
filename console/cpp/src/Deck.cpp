#include "Deck.h"

using namespace std;
using namespace binary;
using namespace binaryAnte;


Deck::Deck(int deckSize, Identifier& identifier){
    id = identifier.nextId(true);
    this->deckSize = deckSize;

    deck = new Card[deckSize];
    for(int i = 0; i < deckSize; i++) deck[i] = Card();
}
Deck::Deck(int deckSize, BinaryType cardType, Identifier& identifier){
    id = identifier.nextId(true);
    this->deckSize = deckSize;

    deck = new Card[deckSize];
    for(int i = 0; i < deckSize; i++) deck[i] = Card(cardType, identifier);
}

Deck::~Deck(){
    delete[] deck;
}


int Deck::getSize(){
    return deckSize;
}

Card Deck::getTop(){
    return deck[0];
}
Card Deck::get(unsigned int position){
    if(position < deckSize) return deck[position];
}


void Deck::toss(){
    for(int i = 0; i < deckSize; i+=2) swap(deck[rand()%(deckSize-1)], deck[rand()%(deckSize-1)]);
}

void Deck::print(){
    cout << "Deck " << id << ": ";
    for(int i = 0; i < deckSize; i++) cout << deck[i].toString() << " ";
    cout << "\tTop: " << deck[0].toString() << endl;
}

void Deck::clear(){
    delete[] deck;
    deckSize = 0;
}
