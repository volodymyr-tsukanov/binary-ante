#include <iostream>
#include "Deck.h"
#include "Binary.h"

using namespace std;
using namespace binary;


int main()
{
    Deck deck = Deck(BinaryType::bin8);
    deck.print();

    return 0;
}
