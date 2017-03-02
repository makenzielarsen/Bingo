//
// Created by Makenzie Larsen on 2/27/17.
//

#include "Card.h"
#include <iomanip>

int Card::generateRandomNumber(int m_maxNumber) {
    int min = 1;
    int max = m_maxNumber;
    return min + rand() % (max - min);
}

Card::Card(int cardSize, int maxNumber) {
    m_cardSize = cardSize;
    m_maxNumber = maxNumber;
    m_numberOfNumbers = m_cardSize * m_cardSize;

    for (int i = 0; i < m_numberOfNumbers; i++) {
        int number = generateRandomNumber(m_maxNumber);
        for (int j = 0; j < i; j++) {
            while (m_gridNumbers[j] == number){
                number = generateRandomNumber(maxNumber);
            }
        }
        m_gridNumbers[i] = number;
    }
}

void Card::print(std::ostream& out) const {
    for (int column = 0; column < m_cardSize; column++) {
        out << "+----";
    }
    out << "+" << std::endl;

    int rowOffset = 0;
    for (int row = 0; row < m_cardSize; row++) {
        for (int column = 0; column < m_cardSize; column++) {
            out << "|" << std::setw(3) << m_gridNumbers[column + rowOffset] << " ";
        }
        out << "|" << std::endl;
        rowOffset += m_cardSize;
    }

    for (int column = 0; column < m_cardSize; column++) {
        out << "+----";
    }
    out << "+" << std::endl;

    out << std::endl;
}
