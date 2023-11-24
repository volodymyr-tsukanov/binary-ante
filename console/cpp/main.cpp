#include <iostream>
#include "Deck.h"
#include "Binary.h"
#include "BinaryType.h"

using namespace std;
using namespace binary;
using namespace binaryAnte;


int main()
{
    Deck deck = Deck(8);
    for(int i = 0; i < 33; i++){
        deck.print();
        deck.toss();
    }

    return 0;
}
