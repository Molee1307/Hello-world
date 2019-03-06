// Hello World.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	std::cout << "Do u like C++ ? Y or N ?" << std::endl;

	char A1;
	std::cin >> A1;

	while (A1 != 'Y' && A1 != 'N')
	{
		std::cout << "Please give the right Answer :D" << std::endl;
		std::cin >> A1;
	}

	if (A1 == 'Y')
		std::cout << "Hello World!\n" << std::endl;
	else if (A1 == 'N')
	{
		std::cout << "Bye-Bye..." << std::endl;
		std::cout << "Pherhaps, you want one more chance ~" << std::endl << "Please answer again :)" << std::endl;
		char A2;
		std::cin >> A2;

		while (A2 != 'Y' && A2 != 'N')
		{
			std::cout << "Please give the right Answer :D" << std::endl;
			std::cin >> A2;
		}
		if (A2 == 'Y')
			std::cout << "Hello World!\n" << std::endl;
		else if (A2 == 'N')
			std::cout << "Okay, then Bye-Bye..." << std::endl;
	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
