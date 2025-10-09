#include <iostream>

int add(int a, int b) {
	int sum = a + b; // Lokal variabel, existerar endast inom denna funktion
	return sum;
}

int subtract(int a, int b) {
	int diff = a - b;
	return diff;
}

void nice_math_greeting_print(std::string name) {
	std::cout << "Welcome to my math functions, " << name << std::endl;
}

float maxOfThree(float a, float b, float c) {
	float max = a;
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	return max;
}

int main() {
	//int k = 3;
	//int l = 5;
	int sum = add(5, 4); // Global variabel, existerar hela programmet
	int sum2 = add(10, 7);
	int sum3 = add(1, 4);

	int diff = subtract(10, 4);


	nice_math_greeting_print("Alice");

	printf(maxOfThree(2, 19, 6));
	maxOfThree(5, 9, 6);
	maxOfThree(2, 6, 6);
	maxOfThree(7, 19, 6);


	return 0;
}