//
// Created by Stephen Clyde on 2/20/17.
//

#include "MenuOptionTester.h"

#include "../MenuOption.h"

#include <iostream>

#include "Test.h"

void MenuOptionTester::testConstructorAndGetter()
{
    std::cout << "-------------" << std::endl;
    std::cout << "Menu Option Tests" << std::endl;

    {

        MenuOption option("A", "Test option A");

        TEST(option.getCommand(), "A");
    }

    {

        MenuOption option("", "");

        TEST(option.getCommand(), "");
    }

}
