#ifndef IDENTIFIER_H
#define IDENTIFIER_H

#include <iostream>
#include <ctime>


namespace binaryAnte{
class Identifier {
private:
    long id;

public:
    Identifier();
    ~Identifier();

    long nextId();
};
}

#endif // IDENTIFIER_H
