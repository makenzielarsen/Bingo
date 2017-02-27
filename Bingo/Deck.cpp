//
// Created by Stephen Clyde on 2/16/17.
//

#include "Deck.h"

Deck::Deck(int cardSize, int cardCount, int numberMax)
{
    m_cardCount = cardCount;

    for (int i = 0; i < cardCount; i++) {
        m_cards[i] = new Card(cardSize, numberMax);
    }
}

Deck::~Deck()
{
    delete[]m_cards;
}

void Deck::print(std::ostream& out) const
{
    // TODO: Implement
}

void Deck::print(std::ostream& out, int cardIndex) const
{
    // TODO: Implement
}

