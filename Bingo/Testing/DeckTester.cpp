//
// Created by Makenzie Larsen on 2/27/17.
//
#include <iostream>
#include <fstream>
#include "DeckTester.h"
#include "../Deck.h"
#include "Test.h"

void deckConstructorTest() {
    Deck goodDeck(5, 5, 26);
    TEST_NOT_NULL(goodDeck.m_cards[0])
}

void testCardSize() {
    Deck invalidCardSize(2, 12, 15);
    TEST_NULL(invalidCardSize.m_cards[0])
}

void testCardCount() {
    Deck invalidCardCount(13, 100000, 14902);
    TEST_NULL(invalidCardCount.m_cards[0])
}


void DeckTester::runTests() {
    std::cout << "-------------" << std::endl;
    std::cout << "Deck Tests" << std::endl;
    deckConstructorTest();
    testCardSize();
    testCardCount();
}
