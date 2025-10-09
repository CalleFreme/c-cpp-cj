#include <iostream>

// Funktion som byter plats p� tv� heltalsv�rden med hj�lp av pekare.
// En pekare �r en variabel som inneh�ller adressen till en annan variabel.
// Genom att anv�nda * (dereferensering) kan vi komma �t och �ndra v�rdet p� den variabel pekaren pekar p�.
void swap(int* a, int* b) {
    // H�r dereferenserar vi a och b f�r att l�sa deras v�rden.
    int temp = *a;      // *a h�mtar v�rdet som a pekar p�.
    *a = *b;            // *a och *b anv�nds f�r att byta v�rden mellan de adresser som a och b pekar p�.
    *b = temp;          // *b f�r det gamla v�rdet fr�n *a.
    // Dereferensering sker varje g�ng vi anv�nder * framf�r en pekare f�r att komma �t v�rdet.
}

// Funktion som s�tter tillst�ndet f�r en LED med hj�lp av en pekare till en boolesk variabel.
// Vi skickar in adressen till variabeln som ska �ndras, och anv�nder dereferensering f�r att s�tta dess v�rde.
void setLedState1(bool* led, bool state) {
    if (led) {          // Kontrollera att pekaren inte �r null.
        *led = state;   // Dereferensering: *led anv�nds f�r att s�tta v�rdet p� variabeln som pekaren led pekar p�.
    }
}

// Funktion som s�tter tv� temperaturgr�nser med hj�lp av pekare till float-variabler.
// Vi skickar in adresser till variablerna och anv�nder dereferensering f�r att �ndra deras v�rden.
void getTempRange1(float* min, float* max) {
    if (min) *min = 18.0f; // Dereferensering: *min s�tts till 18.0 om min inte �r null.
    if (max) *max = 26.0f; // Dereferensering: *max s�tts till 26.0 om max inte �r null.
}

int main2()
{
    std::cout << "Hello World!\n";

    // Exempel p� anv�ndning av swap:
    int x = 5, y = 10;
    swap(&x, &y); // &x och &y �r adresserna till variablerna x och y (referenser till minnet).
    std::cout << "Swapped: x=" << x << ", y=" << y << std::endl;

    // Exempel p� anv�ndning av setLedState:
    bool led = false;
    setLedState1(&led, true); // &led skickar adressen till variabeln led.
    std::cout << "LED state: " << (led ? "ON" : "OFF") << std::endl;

    // Exempel p� anv�ndning av getTempRange:
    float minTemp, maxTemp;
    getTempRange1(&minTemp, &maxTemp); // &minTemp och &maxTemp skickar adresserna till variablerna.
    std::cout << "Temp range: " << minTemp << " - " << maxTemp << std::endl;

    return 0;
}

/*
Sammanfattning av pekare och dereferensering:
- En pekare �r en variabel som lagrar adressen till en annan variabel.
- & anv�nds f�r att h�mta adressen till en variabel (referens).
- * anv�nds f�r att dereferera en pekare, dvs. komma �t eller �ndra v�rdet p� den variabel pekaren pekar p�.
- Dereferensering sker varje g�ng vi anv�nder * framf�r en pekare, t.ex. *a, *led, *min, *max.
*/