#include <iostream>
#include <windows.h>
#include <locale>

using namespace std;

// I detta program finns flera buggar relaterade till loopar och array-indexering.
// Uppgiften �r att identifiera och r�tta till dessa buggar.
// Hur m�nga buggar kan du hitta?
// Ledtr�d: minst 5 buggar finns i koden nedan.

int main() {
    setlocale(LC_ALL, "SV_se");
    SetConsoleOutputCP(65001);
    int n;
    cout << "Hur m�nga temperaturv�rden vill du mata in? ";
	cin >> n;   // Bugg: Ingen kontroll av att n �r inom arrayens gr�nser (max 10)

    double temps[10];

    cout << "Mata in temperaturer: ";
    for (int i = 1; i <= n; i++) {
		cin >> temps[i];    // Bugg: Array-indexering b�rjar fr�n 0, inte 1. Dessutom kan i bli lika med n, vilket �r utanf�r arrayens gr�nser.
    }

    double sum;
    for (int i = 0; i < n; i++) {
		sum += temps[i];    // Bugg: sum �r oinitialiserad
    }

	double avg = sum / n; // Bugg: Om n �r 0 kommer detta att orsaka en division med noll
    cout << "Medeltemperatur: " << avg << endl;

	double min = temps[0];  // Bugg: temps[0] kan vara odefinierad om n �r 0
    double max = temps[0];
    for (int i = 0; i <= n; i++) {
        if (temps[i] < min) min = temps[i];
        if (temps[i] > max) max = temps[i];
    }
    cout << "Min: " << min << ", Max: " << max << endl;

    return 0;
}
