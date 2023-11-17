#include <iostream>
#include "Deck.h"
#include "binary.h"

using namespace std;


int main()
{
    Deck deck = Deck(BinaryType::bin8);
    deck.print();

    return 0;
}
