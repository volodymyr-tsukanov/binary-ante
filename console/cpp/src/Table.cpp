#include "Table.h"

using namespace std;
using namespace binaryAnte;


Table::Table(binaryAnte::Identifier& identifier){
    id = identifier.nextId(true);
    rules = Rules();
    deck = Deck();
}
Table::Table(binaryAnte::Rules& rules, binaryAnte::Identifier& identifier){
    id = identifier.nextId(true);
    rules = rules;
    deck = Deck();
}

Table::~Table(){
}


void Table::print(){
    cout << "Table " << id << ": ";
}
