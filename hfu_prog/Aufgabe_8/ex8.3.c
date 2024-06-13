// Uebung 3: Arrays und Strukturen

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Punkt {
    int x;
    int y;
};

int main() {
    struct Punkt arr[50];
    int minX, minY;

    srand(time(0));

    // befuellen des Arrays
    for (int i = 0; i < 50; i++) {
        arr[i].x = rand() % 1001; // Modulo 1001 gibt Zufallszahlen zwischen 0 und 1000
        arr[i].y = rand() % 1001;
    }

    minX = arr[0].x;
    minY = arr[0].y;


    for (int i = 1; i < 50; i++) {
        if (arr[i].x < minX) {
            minX = arr[i].x;
            int tempX = i;
        }
    }


    for (int i = 1; i < 50; i++) {
        if (arr[i].y < minY) {
            minY = arr[i].y;
            int tempY = i;
        }
    }

    for (int i = 0; i < 50; i++) {
        printf("x=%i \tund \ty=%i\n", arr[i].x, arr[i].y);
    }

    printf("-----\n");

    printf("Kleinster x-Wert: %i\n", minX);
    printf("Kleinster y-Wert: %i\n", minY);

    printf("Kleinster x-Wert an Index %i: %i\n", minX);
    printf("Kleinster y-Wert an Index %i: %i\n", minY);

    return 0;
}
