// Uebung 1: Primzahlen
// ohne Heron-Verfahren
#include <stdbool.h>
#include <stdio.h>

// Ziel: Eingabe des x-Werts und boolische Ausgabe

bool prim(int x) {
    // if (x == 0 || x == 1) {
    //     return false;

    if (x <= 1) // Abfangen von 1, 0 und negativen Zahlen
        return false;

    if (x == 2)
        return true;

    if (x % 2 == 0) // Auschliessen von geraden Zahlen
        return false;

    for (int y = 3; y < x; y += 2) {
        if (x % y == 0) {
            // x glatt teilbar durch y -> keine Primzahl
            return false;
        }
    }
    return true;
}

int main() {
    int x;

    printf("Geben Sie einen Wert fuer x ein: \n");
    scanf("%i", &x);

    if (prim(x) == true) {
        printf("Primzahl");
    } else {
        printf("Keine Primzahl");
    }

    prim(x);
}
