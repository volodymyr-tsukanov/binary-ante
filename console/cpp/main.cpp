#include <iostream>
#include "Deck.h"
#include "Binary.h"
#include "BinaryType.h"

using namespace std;
using namespace binary;
using namespace binaryAnte;


int main()
{
    try{
    Deck deck = Deck(8, BinaryType::bin4);
    for(int i = 0; i < 33; i++){
        deck.print();
        deck.toss();
    }
    } catch(const exception& e){
        cout << e.what();
    }

    return 0;
}
