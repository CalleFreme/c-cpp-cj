#include <iostream>
using namespace std;

// I detta program finns flera buggar relaterade till loopar och array-indexering.
// Uppgiften �r att identifiera och r�tta till dessa buggar.
// Hur m�nga buggar kan du hitta?
// Ledtr�d: minst 5 buggar finns i koden nedan.

int main() {
    int n;
    cout << "Hur m�nga temperaturv�rden vill du mata in? ";
    cin >> n;

    double temps[10];

    cout << "Mata in temperaturer: ";
    for (int i = 1; i <= n; i++) {
        cin >> temps[i];
    }

    double sum;
    for (int i = 0; i < n; i++) {
        sum += temps[i];
    }

    double avg = sum / n;
    cout << "Medeltemperatur: " << avg << endl;

    double min = temps[0];
    double max = temps[0];
    for (int i = 0; i <= n; i++) {
        if (temps[i] < min) min = temps[i];
        if (temps[i] > max) max = temps[i];
    }
    cout << "Min: " << min << ", Max: " << max << endl;

    return 0;
}
