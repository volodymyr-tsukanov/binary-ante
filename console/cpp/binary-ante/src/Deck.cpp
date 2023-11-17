#include "Deck.h"

using namespace std;


Deck::Deck(Deck::Type type){
    this->type = type;

    fillDeck();
}


int Deck::randRange(int min, int max){
    return min + (rand() % (max+1));
}

void Deck::fillDeck(){
    int max = pow(2, (int)type), maxTop = pow(2, (int)(type)-1);
    srand(time(0));
    deck = randRange(0, max);
    top = randRange(0, maxTop);
}


string Deck::toBinary(int number){
    string sBin = "";

    while(number > 0){
        sBin = to_string(number%2) + sBin;
        number /= 2;
    }
    while(sBin.length() < (int)type) sBin = "0" + sBin;

    return sBin;
}

void Deck::print(){
    cout << "Deck: (10)" << deck << " = (2)" << toBinary(deck) << "\tTop: (10)" << top << " = (2)" << toBinary(top) << endl;
    cout << endl;
}
