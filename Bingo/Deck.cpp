//
// Created by Stephen Clyde on 2/16/17.
//

#include "Deck.h"

Deck::Deck(int cardSize, int cardCount, int numberMax) {
    if (cardSize >= 3 && cardSize <= 15 &&
        cardCount >= 3 && cardCount <= 10000) {
        m_cardCount = cardCount;

        m_cards = new Card* [m_cardCount];

        for (int i = 0; i < cardCount; i++) {
            m_cards[i] = new Card(cardSize, numberMax);
        }
    }
    else {
        m_cards = nullptr;
        m_cardCount = 0;
    }

}

Deck::~Deck() {
    if (m_cards != nullptr) {
        for (int card = 0; card < m_cardCount; card++) {
            delete m_cards[card];
        }
        delete[] m_cards;
    }
}

void Deck::print(std::ostream &out) const {
    for (int card = 0; card < m_cardCount; card++) {
        out << "Card #" << card + 1 << std::endl;
        m_cards[card]->print(out);
    }
}

void Deck::print(std::ostream &out, int cardIndex) const {
    out << "Card #" << cardIndex << std::endl;
    m_cards[cardIndex - 1]->print(out);
}
