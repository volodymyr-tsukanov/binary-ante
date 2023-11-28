#include <iostream>
#include "Deck.h"
#include "Binary.h"
#include "BinaryType.h"
#include "Identifier.h"

using namespace std;
using namespace binary;
using namespace binaryAnte;


int main()
{
    try{
        srand(time(0));

        Identifier identifier = Identifier();
        Deck deck = Deck(8, BinaryType::bin4, identifier);
        for(int i = 0; i < 33; i++){
            deck.print();
            deck.toss();
        }
    } catch(const exception& e){
        cout << e.what();
    }

    return 0;
}
