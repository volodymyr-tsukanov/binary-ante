#include <iostream>
#include "Deck.h"
#include "Binary.h"
#include "BinaryType.h"

using namespace std;
using namespace binary;


int main()
{
    Binary b = Binary(BinaryType::bin8);
    Binary b2 = Binary(BinaryType::bin4, 2);
    b = b + b2;
    cout << b.toDec() << " = " << b.toString() << endl;
    b = b - b2;
    cout << b.toDec() << " = " << b.toString() << endl;
    b = b * b2;
    cout << b.toDec() << " = " << b.toString() << endl;
    b = b / b2;
    cout << b.toDec() << " = " << b.toString() << endl;

    return 0;
}
