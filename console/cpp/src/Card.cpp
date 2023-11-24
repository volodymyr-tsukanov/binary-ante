#include "Card.h"

using namespace std;
using namespace binary;
using namespace binaryAnte;


Card::Card()
{
    /*this->deckSize = (int)deckSize;

    deck = new int[this->deckSize];
    string s = Binary(deckSize).toString();
    for(int i = 0; i < s.length(); i++) deck[i] = (int)(s[i])-48;

    if(topSize < deckSize) top = Binary(topSize);
    else top = Binary(BinaryType::bin4);*/
}

Card::~Card()
{
    //dtor
}


string Card::toString(){
    return value.toString();
}
