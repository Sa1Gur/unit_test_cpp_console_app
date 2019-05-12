// ConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

#include "pch.h"
#include "check.h"

int main()
{
	char c = 'E';
	int numb = 2;
    std::cout << "Check if next move is e2\n";

	std::cin >> c >> numb;

	CheckE2(c, numb);
}
