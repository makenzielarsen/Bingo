//
// Created by Makenzie Larsen on 2/27/17.
//

#ifndef BINGO_CARD_H
#define BINGO_CARD_H

#include <ostream>
#include <vector>

class Card {
private:
    int m_cardSize;
    int m_maxNumber;

    int generateRandomNumber (int m_maxNumber);

public:
    Card(int cardSize, int maxNumber);
    ~Card();

    void print(std::ostream& out) const;

    std::vector<int> m_gridNumbers;

    bool hasValue(int x);
};

#endif //BINGO_CARD_H
