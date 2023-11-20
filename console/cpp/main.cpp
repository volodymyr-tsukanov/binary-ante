#include <iostream>
//#include "Deck.h"
#include "Binary.h"
#include "BinaryType.h"

using namespace std;
using namespace binary;


int main()
{
    Binary b = Binary(BinaryType::bin8);
    cout << b.toDec() << " = " << b.toString();

    return 0;
}
