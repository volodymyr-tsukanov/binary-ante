#ifndef TABLE_H
#define TABLE_H

#include "Deck.h"
#include "Rules.h"


namespace binaryAnte {
class Table {
private:
    int id;
    Rules rules;
    //Deck deck;

public:
    Table(binaryAnte::Identifier& identifier);
    Table(binaryAnte::Rules& rules, binaryAnte::Identifier& identifier);
    ~Table();

    void print();
    void clear();
};
}

#endif // TABLE_H
