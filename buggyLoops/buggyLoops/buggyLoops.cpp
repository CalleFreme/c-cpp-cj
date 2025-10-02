#include <iostream>
using namespace std;

// I detta program finns flera buggar relaterade till loopar och array-indexering.
// Uppgiften är att identifiera och rätta till dessa buggar.
// Hur många buggar kan du hitta?
// Ledtråd: minst 5 buggar finns i koden nedan.

int main() {
    int n;
    cout << "Hur många temperaturvärden vill du mata in? ";
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
