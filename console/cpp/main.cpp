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
        Deck deck = Deck(10, BinaryType::bin4, identifier);
        deck.print();

        Binary bin = Binary("1111");
        cout << bin.toDec() << " " << bin.toString() << endl;
        Binary binr = bin.clone();
        Binary::addOne(binr);
        cout << binr.toDec() << " " << binr.toString() << endl;
    } catch(const exception& e){
        cout << e.what();
    }

    return 0;
}
