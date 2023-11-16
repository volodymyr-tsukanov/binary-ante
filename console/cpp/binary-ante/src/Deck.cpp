#include "Deck.h"

using namespace std;


Deck::Deck(unsigned int size){
    this->size = size;

    fillDeck();
}


void Deck::fillDeck(){
    deck = new int[size];
    for(int i = 0; i < size; i++){
        deck[i] = ZERO + (rand() % ONE+1);
    }
}


void Deck::print(){
    for(int i = 0; i < size; i++) cout << deck[i] << " ";
    cout << endl;
}
