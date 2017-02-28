//
// Created by Makenzie Larsen on 2/27/17.
//

#ifndef BINGO_CARD_H
#define BINGO_CARD_H

#include <ostream>

class Card {
private:
    int m_cardSize;
    int m_numberOfNumbers;
    int m_maxNumber;

    int generateRandomNumber (int m_maxNumber);

public:

    Card(int cardSize, int maxNumber);
    void print(std::ostream& out) const;

    int m_gridNumbers[];

};





#endif //BINGO_CARD_H
