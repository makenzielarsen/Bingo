//
// Created by Makenzie Larsen on 2/27/17.
//

#include <iostream>
#include <fstream>
#include "CardTester.h"
#include "../Card.h"
#include "Test.h"

void cardSizeConstructorTest() {
    Card goodCard(5, 26);
    auto actualSize = goodCard.m_gridNumbers.size();
    TEST(actualSize, 25);
}

void testHasValue() {
    Card goodCard(3, 9);
    auto hasValue = goodCard.hasValue(1);
    TEST(hasValue, true)
}

void CardTester::runTests() {
    std::cout << "-------------" << std::endl;
    std::cout << "Card Tests" << std::endl;
    cardSizeConstructorTest();
    testHasValue();
}

