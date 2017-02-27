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

void Card::print(std::ostream& out) const {
    //first line
    for (int column = 0; column < m_cardSize; column++) {
        out << "+----+";
    }
    out << std::endl;

    int rowOffset = 0;
    for (int row = 0; row < m_cardSize; row++) {
        for (int column = 0; column < m_cardSize; column++) {
            out << "| " << m_gridNumbers[column + rowOffset] << " ";
        }
        out << " |" << std::endl;
        rowOffset += m_cardSize;
    }

    out << std::endl;
}
