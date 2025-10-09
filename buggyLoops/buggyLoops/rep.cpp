
// Datatyper och variabler
// I C++ har vi strängar, importera: #include <string>
#include <iostream>
#include <string>
using namespace std;

int add(int a, int b);
int subtract(int a, int b);

int main() {
	int a;			// Heltal
	float b = 2.0f;		// Flyttal
	double c;			// Dubbelprecision flyttal
	string s;		// Sträng
	cout << "Ange ett heltal: ";
	cin >> a;
	
	// Anropa funktioner från my_math_funcs.cpp
	int sum = add(a, 5);
	int diff = subtract(a, 3);

	// Villkorssatser
	if (a > 0) {
		cout << "Heltalet är positivt." << endl;
	} else if (a < 0) {
		cout << "Heltalet är negativt." << endl;
	} else {
		cout << "Heltalet är noll." << endl;
	}

	// Switch-sats
	switch (a) {
		case 1:
			cout << "Du angav ett." << endl;
			break;
		case 2:
			cout << "Du angav två." << endl;
			break;
		case 3:
			cout << "Du angav tre." << endl;
			break;
		case 4:
			cout << "Du angav fyra." << endl;
			break;
		case 5:
			cout << "Du angav fem." << endl;
			break;
		default:
			cout << "Du angav något annat än ett eller två." << endl;
			break;
	}

	// Loopar
	// for-loop
	for (int i = 0; i < a; i++) {
		cout << "i är nu: " << i << endl;
	}
	// while-loop
	int j = 0;
	while (j < a) {
		cout << "j är nu: " << j << endl;
		j++;
	}

	while (true == true) {
		cout << "Oändlig loop! Avbryt med 0" << endl;
		int continueLoop;
		cin >> continueLoop;
		if (continueLoop == 0) {
			break; // Avbryt loopen om användaren anger 0
		}
	}
	
	// do-while-loop
	int k = 0;
	do {
		cout << "k är nu: " << k << endl;
		k++;
	} while (k < a);
	
	// Arrayer
	int my_arr[5]; // Array med 5 heltal
	// Indexering börjar på 0, sista index är 4
	// fyll arrayen med värden
	for (int i = 0; i < 5; i++) {
		my_arr[i] = i * 10; // Resulterar i {0, 10, 20, 30, 40}
	}
	// Ta fram specfikt värde med index
	cout << "Värdet på index 2 är: " << my_arr[2] << endl; // Skriver ut 20

	// range-for -loop (C++11 och senare)
	for (int number : my_arr) {
		cout << "Värde i arrayen: " << number << endl;
	}

	return 0;
}

