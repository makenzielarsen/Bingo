//
// Created by Stephen Clyde on 2/20/17.
//

#include "MenuTester.h"

#include "../MenuOption.h"
#include "../Menu.h"

#include <iostream>
#include "Test.h"

void MenuTester::testConstructorAndGetter()
{
    std::cout << "-------------" << std::endl;
    std::cout << "Menu Tests" << std::endl;

    {

        Menu menu("Deck");
        menu.addOption("A", "Test option A");
        menu.addOption("B", "Test option B");
        menu.addOption("C", "Test option C");
        menu.addOption("D", "Test option D");
        menu.addOption("E", "Test option E");


        TEST(menu.getHeader(), "Deck");

        TEST(menu.getOptionCount(), 5);

        const MenuOption* option = menu.getOption(0);
        TEST_NOT_NULL(option)
        TEST(option->getCommand(), "A")
        TEST(option->getDescription(), "Test option A")

        option = menu.getOption(1);
        TEST_NOT_NULL(option)
        TEST(option->getCommand(), "B")
        TEST(option->getDescription(), "Test option B")

        option = menu.getOption(2);
        TEST_NOT_NULL(option)
        TEST(option->getCommand(), "C")
        TEST(option->getDescription(), "Test option C")

        option = menu.getOption(3);
        TEST_NOT_NULL(option)
        TEST(option->getCommand(), "D")
        TEST(option->getDescription(), "Test option D")

        option = menu.getOption(4);
        TEST_NOT_NULL(option)
        TEST(option->getCommand(), "E")
        TEST(option->getDescription(), "Test option E")

        option = menu.getOption(-1);
        TEST_NULL(option)

        option = menu.getOption(5);
        TEST_NULL(option)
    }

    {

        Menu menu("");

        TEST(menu.getHeader(), "")
        TEST(menu.getOptionCount(), 0)

        const MenuOption* option = menu.getOption(0);
        TEST_NULL(option)

        option = menu.getOption(-1);
        TEST_NULL(option)
    }
}
