//
// Created by Makenzie Larsen on 2/27/17.
//

#include "Card.h"

int Card::generateRandomNumber(int m_maxNumber) {

}

Card::Card(int cardSize, int maxNumber) {
    m_cardSize = cardSize;
    m_maxNumber = maxNumber;

    for (int i = 0; i < m_sizeSquared; i++) {
        int number = generateRandomNumber(m_maxNumber);
        for (int j = 0; j < i; j++) {
            while (m_gridNumbers[j] == number){
                number = generateRandomNumber(maxNumber);
            }
        }
        m_gridNumbers[i] = number;
    }
}

int Card::getGridNumber(int position) {
    return m_gridNumbers[position];
}

