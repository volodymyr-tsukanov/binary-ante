#include "Identifier.h"

using namespace std;
using namespace binaryAnte;


Identifier::Identifier(){
    id = time(0);
}

Identifier::~Identifier(){
}


long Identifier::nextId(){
    return id++;
}
