//
// Created by Stephen Clyde on 2/16/17.
//

#ifndef BINGO_DECK_H
#define BINGO_DECK_H

#include <ostream>
#include "Card.h"

class Deck {
private:
    int m_cardCount;

public:
    Deck(int cardSize, int cardCount, int numberMax);
    ~Deck();

    int getCardCount() { return m_cardCount; }

    Card** m_cards;

    void print(std::ostream &out) const;
    void print(std::ostream &out, int cardIndex) const;
};

#endif //BINGO_DECK_H
