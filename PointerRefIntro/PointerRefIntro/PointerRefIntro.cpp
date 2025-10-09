// PointerRefIntro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <locale>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void setLedState(bool* led, bool state) {
    if (led) {
        *led = state;
    }
}

void swap(int* a, int* b); // Forward declaration, får in swap från demo.cpp

int main()
{
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "SV_se");
    std::cout << "Hello World!\n";

    int x = 5, y = 10;
	std::cout << "Before swap: x=" << x << ", y=" << y << std::endl;
    // Vi kallar på swap:
    // &x och &y är adresserna till variablerna x och y (referenser till minnet).
    swap(&x, &y);
	std::cout << "After swap: x=" << x << ", y=" << y << std::endl;


    bool led = false;
    setLedState(&led, false);   //Villkor ? om true : om false
    std::cout << "LED state: " << (led ? "ON" : "OFF");



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


