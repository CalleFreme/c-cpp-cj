#include <iostream>

// Funktion som byter plats på två heltalsvärden med hjälp av pekare.
// En pekare är en variabel som innehåller adressen till en annan variabel.
// Genom att använda * (dereferensering) kan vi komma åt och ändra värdet på den variabel pekaren pekar på.
void swap(int* a, int* b) {
    // Här dereferenserar vi a och b för att läsa deras värden.
    int temp = *a;      // *a hämtar värdet som a pekar på.
    *a = *b;            // *a och *b används för att byta värden mellan de adresser som a och b pekar på.
    *b = temp;          // *b får det gamla värdet från *a.
    // Dereferensering sker varje gång vi använder * framför en pekare för att komma åt värdet.
}

// Funktion som sätter tillståndet för en LED med hjälp av en pekare till en boolesk variabel.
// Vi skickar in adressen till variabeln som ska ändras, och använder dereferensering för att sätta dess värde.
void setLedState1(bool* led, bool state) {
    if (led) {          // Kontrollera att pekaren inte är null.
        *led = state;   // Dereferensering: *led används för att sätta värdet på variabeln som pekaren led pekar på.
    }
}

// Funktion som sätter två temperaturgränser med hjälp av pekare till float-variabler.
// Vi skickar in adresser till variablerna och använder dereferensering för att ändra deras värden.
void getTempRange1(float* min, float* max) {
    if (min) *min = 18.0f; // Dereferensering: *min sätts till 18.0 om min inte är null.
    if (max) *max = 26.0f; // Dereferensering: *max sätts till 26.0 om max inte är null.
}

int main2()
{
    std::cout << "Hello World!\n";

    // Exempel på användning av swap:
    int x = 5, y = 10;
    swap(&x, &y); // &x och &y är adresserna till variablerna x och y (referenser till minnet).
    std::cout << "Swapped: x=" << x << ", y=" << y << std::endl;

    // Exempel på användning av setLedState:
    bool led = false;
    setLedState1(&led, true); // &led skickar adressen till variabeln led.
    std::cout << "LED state: " << (led ? "ON" : "OFF") << std::endl;

    // Exempel på användning av getTempRange:
    float minTemp, maxTemp;
    getTempRange1(&minTemp, &maxTemp); // &minTemp och &maxTemp skickar adresserna till variablerna.
    std::cout << "Temp range: " << minTemp << " - " << maxTemp << std::endl;

    return 0;
}

/*
Sammanfattning av pekare och dereferensering:
- En pekare är en variabel som lagrar adressen till en annan variabel.
- & används för att hämta adressen till en variabel (referens).
- * används för att dereferera en pekare, dvs. komma åt eller ändra värdet på den variabel pekaren pekar på.
- Dereferensering sker varje gång vi använder * framför en pekare, t.ex. *a, *led, *min, *max.
*/