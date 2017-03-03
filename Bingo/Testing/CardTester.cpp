//
// Created by Makenzie Larsen on 2/27/17.
//

#include <iostream>
#include <fstream>
#include "CardTester.h"
#include "../Card.h"

void cardSizeConstructorTest() {
    Card goodCard(5, 26);
    auto actualSize = goodCard.m_gridNumbers.size();
    if (actualSize != 25) {
        std::cout << "Failed cardSizeConstructorTest: expecting 25, got " << actualSize << std::endl;
    }
    else {
        std::cout << "Passed cardSizeConstructorTest" << std::endl;
    }
}

void testHasValue() {
    Card goodCard(3, 9);
    auto hasValue = goodCard.hasValue(1);
    if (hasValue != 1) {
        std::cout << "Failed testHasValue: expecting true got " << hasValue << std::endl;
    }
    else {
        std::cout << "Passed testHasValue" << std::endl;
    }
}



void CardTester::runTests() {
    std::cout << "-------------" << std::endl;
    std::cout << "Card Tests" << std::endl;
    cardSizeConstructorTest();
    testHasValue();
}

void printCardTest() {
    Card cardOne(5, 26);
    cardOne.print(std::cout);

    Card cardTwo(13, 170);
    std::ofstream outputFile;
    outputFile.open ("outputTwo.txt");
    cardTwo.print(outputFile);
    outputFile.close();
}

