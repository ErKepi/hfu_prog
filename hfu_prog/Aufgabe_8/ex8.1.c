// Uebung 1: Primzahlen

#include <stdbool.h>
#include <stdio.h>

// Ziel: Eingabe des x-Werts und boolische Ausgabe

// Rauskopiert aus Blatt 4 und entsprechend angepasst:
double heron(int x) {
    double a, anWert = 1;

    for (int i = 0; i <= 10; i++) {
        // Normalerweise x= [..], aber fuer die Aufgabe mit a getauscht
        a = (anWert + (x / anWert)) / 2;
        anWert = a;
    }
    //printf("%f\n", anWert);

    return a;
}

bool prim(int x) {
    // if (x == 0 || x == 1) {
    //     return false;
    // }

    if (x<=1)
        return false;

    for (int y = 2; y <= heron(x); y+=2) {
        if (x % y == 0) { // x glatt teilbar durch y -> keine Primzahl
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
