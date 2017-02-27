//
// Created by Makenzie Larsen on 2/27/17.
//

#ifndef BINGO_CARD_H
#define BINGO_CARD_H

#include <ostream>

class Card {
private:
    int m_cardSize;
    int const m_sizeSquared = m_cardSize * m_cardSize;
    int m_maxNumber;
    int m_gridNumbers[m_sizeSquared];

    int generateRandomNumber (int m_maxNumber);

public:

    Card(int cardSize, int maxNumber);
    int getGridNumber(int position);
    void print(std::ostream& out) const;

};





#endif //BINGO_CARD_H