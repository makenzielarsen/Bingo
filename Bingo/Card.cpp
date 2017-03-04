//
// Created by Makenzie Larsen on 2/27/17.
//

#include "Card.h"
#include "Deck.h"
#include <iomanip>

int Card::generateRandomNumber(int max) {
    return rand() % max + 1;
}

Card::Card(const int cardSize, int maxNumber) {
    m_cardSize = cardSize;
    m_maxNumber = maxNumber;
    int numberOfNumbers = m_cardSize * m_cardSize;

    for (int i = 0; i < numberOfNumbers; i++) {
        int number = generateRandomNumber(maxNumber);
        while (hasValue(number)) {
            number = generateRandomNumber(maxNumber);
        }
        m_gridNumbers.push_back(number);
    }
}

Card::~Card() {

}

bool Card::hasValue(int x) {
    for (int i = 0; i < m_gridNumbers.size(); i++) {
        if (m_gridNumbers[i] == x) {
            return true;
        }
    }
    return false;
}

void Card::print(std::ostream& out) const {
    if (m_cardSize > 10000 || m_cardSize < 3) {
        printf("fsckd \n \n", m_cardSize);
        printf("cardSize is %d\n",m_cardSize);

    } else {
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
}
