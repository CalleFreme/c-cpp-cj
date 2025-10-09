// StringFormatting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    // Sträng-formatering i C++:
	int age = 25;
	std::string name = "Alice";
	
	// std::format (C++20 och senare):
	std::string formattedString = std::format("Name: {}, Age: {}", name, age);
	
	// Konvertera int till sträng:
	// "15" + "10" = "1510"
	// 15 + 10 = 25
	std::string ageString = std::to_string(age);
	std::cout << formattedString << std::endl;

	// Fler exempel:
	double pi = 3.14159;
	std::string piString = std::format("Value of Pi: {:.2f}", pi); // 2 decimaler

	// I C är strängar en array av char/tecken
	char my_c_str[50]; // Vi skapar en buffer, d.v.s. minnesutrymme för strängen. 50 är maxlängden.
	//Strängen kan alltså vara upp till 49 tecken + null-terminatorn.
	
	// i C-program används sprintf
	sprintf_s(my_c_str, sizeof(my_c_str), "Name: %s, Age: %d", name.c_str(), age);
	std::cout << my_c_str << std::endl;
	
	// Notera: sprintf_s är en säkrare version av sprintf som är specifik för MSVC.
	// 
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
