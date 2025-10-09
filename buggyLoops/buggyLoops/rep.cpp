
// Datatyper och variabler
// I C++ har vi str�ngar, importera: #include <string>
#include <iostream>
#include <string>
using namespace std;

int add(int a, int b);
int subtract(int a, int b);

int main() {
	int a;			// Heltal
	float b = 2.0f;		// Flyttal
	double c;			// Dubbelprecision flyttal
	string s;		// Str�ng
	cout << "Ange ett heltal: ";
	cin >> a;
	
	// Anropa funktioner fr�n my_math_funcs.cpp
	int sum = add(a, 5);
	int diff = subtract(a, 3);

	// Villkorssatser
	if (a > 0) {
		cout << "Heltalet �r positivt." << endl;
	} else if (a < 0) {
		cout << "Heltalet �r negativt." << endl;
	} else {
		cout << "Heltalet �r noll." << endl;
	}

	// Switch-sats
	switch (a) {
		case 1:
			cout << "Du angav ett." << endl;
			break;
		case 2:
			cout << "Du angav tv�." << endl;
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
			cout << "Du angav n�got annat �n ett eller tv�." << endl;
			break;
	}

	// Loopar
	// for-loop
	for (int i = 0; i < a; i++) {
		cout << "i �r nu: " << i << endl;
	}
	// while-loop
	int j = 0;
	while (j < a) {
		cout << "j �r nu: " << j << endl;
		j++;
	}

	while (true == true) {
		cout << "O�ndlig loop! Avbryt med 0" << endl;
		int continueLoop;
		cin >> continueLoop;
		if (continueLoop == 0) {
			break; // Avbryt loopen om anv�ndaren anger 0
		}
	}
	
	// do-while-loop
	int k = 0;
	do {
		cout << "k �r nu: " << k << endl;
		k++;
	} while (k < a);
	
	// Arrayer
	int my_arr[5]; // Array med 5 heltal
	// Indexering b�rjar p� 0, sista index �r 4
	// fyll arrayen med v�rden
	for (int i = 0; i < 5; i++) {
		my_arr[i] = i * 10; // Resulterar i {0, 10, 20, 30, 40}
	}
	// Ta fram specfikt v�rde med index
	cout << "V�rdet p� index 2 �r: " << my_arr[2] << endl; // Skriver ut 20

	// range-for -loop (C++11 och senare)
	for (int number : my_arr) {
		cout << "V�rde i arrayen: " << number << endl;
	}

	return 0;
}

