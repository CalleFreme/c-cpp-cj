#include <iostream>
#include <windows.h>
#include <locale>

using namespace std;

// I detta program finns flera buggar relaterade till loopar och array-indexering.
// Uppgiften är att identifiera och rätta till dessa buggar.
// Hur många buggar kan du hitta?
// Ledtråd: minst 5 buggar finns i koden nedan.

int main() {
    setlocale(LC_ALL, "SV_se");
    SetConsoleOutputCP(65001);
    int n;
    cout << "Hur många temperaturvärden vill du mata in? ";
	cin >> n;   // Bugg: Ingen kontroll av att n är inom arrayens gränser (max 10)

    double temps[10];

    cout << "Mata in temperaturer: ";
    for (int i = 1; i <= n; i++) {
		cin >> temps[i];    // Bugg: Array-indexering börjar från 0, inte 1. Dessutom kan i bli lika med n, vilket är utanför arrayens gränser.
    }

    double sum;
    for (int i = 0; i < n; i++) {
		sum += temps[i];    // Bugg: sum är oinitialiserad
    }

	double avg = sum / n; // Bugg: Om n är 0 kommer detta att orsaka en division med noll
    cout << "Medeltemperatur: " << avg << endl;

	double min = temps[0];  // Bugg: temps[0] kan vara odefinierad om n är 0
    double max = temps[0];
    for (int i = 0; i <= n; i++) {
        if (temps[i] < min) min = temps[i];
        if (temps[i] > max) max = temps[i];
    }
    cout << "Min: " << min << ", Max: " << max << endl;

    return 0;
}
