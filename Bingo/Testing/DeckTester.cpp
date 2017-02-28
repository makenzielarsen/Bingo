//
// Created by Makenzie Larsen on 2/27/17.
//
#include <iostream>
#include <fstream>
#include "DeckTester.h"
#include "../Deck.h"

void DeckTester::deckConstructorTest(){

    Deck goodDeck(5, 5, 26);
    if (goodDeck.m_cards == nullptr) {
        std::cout << "Good Deck failed to create" << std::endl;
    }

    Deck invalidCardSize(2, 12, 15);
    if (invalidCardSize.m_cards != nullptr) {
        std::cout << "Invalid Card Size did not fail" << std::endl;
    }

    Deck invalidCardCount(13, 10000, 14902);
    if (invalidCardCount.m_cards != nullptr) {
        std::cout << "Invalid Card Count did not fail" << std::endl;
    }

    Deck invalidMaxNumber(7, 9, 12);
    if (invalidMaxNumber.m_cards != nullptr) {
        std::cout << "Invalid Max Number did not fail" << std::endl;
    }
}

void DeckTester::printEntireDeckTest(){
    Deck deckOne(3, 7, 50);
    deckOne.print(std::cout);

    Deck deckTwo(7, 14, 197);
    std::ofstream outputFile;
    outputFile.open ("output.txt");
    deckTwo.print(outputFile);
    outputFile.close();
}

void DeckTester::printSingleCardTest(){
    Deck deckOne(3, 7, 50);
    deckOne.print(std::cout, 2);

    Deck deckTwo(7, 14, 197);
    std::ofstream outputFile;
    outputFile.open ("outputOne.txt");
    deckTwo.print(outputFile, 5);
    outputFile.close();
}
