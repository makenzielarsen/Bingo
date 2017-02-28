//
// Created by Makenzie Larsen on 2/27/17.
//

#include <iostream>
#include <fstream>
#include "CardTester.h"
#include "../Card.h"

void CardTester::cardConstructorTest() {
    Card goodCard(5, 26);
    if (goodCard.m_gridNumbers == nullptr) {
        std::cout << "Failure making number array" << std::endl;
    }
}

void CardTester::printCardTest() {
    Card cardOne(5, 26);
    cardOne.print(std::cout);

    Card cardTwo(13, 170);
    std::ofstream outputFile;
    outputFile.open ("outputTwo.txt");
    cardTwo.print(outputFile);
    outputFile.close();
}

