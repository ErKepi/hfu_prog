// Uebung 3: Arrays und Strukturen

#include <stdio.h>
#include <stdlib.h>

struct Punkt {
    int x;
    int y;
};

int main() {
    struct Punkt arr[50];
    int minX, minY;

    // befuellen des Arrays
    for (int i = 0; i < 50; i++) {
        arr[i].x = rand();
        arr[i].y = rand();
    }

    minX = arr[0].x;
    minY = arr[0].y;


    for (int i = 1; i < 50; i++) {
        if (arr[i].x < minX) {
            minX = arr[i].x;
        }
    }


    for (int i = 1; i < 50; i++) {
        if (arr[i].y < minY) {
            minY = arr[i].y;
        }
    }

    for (int i = 0; i < 50; i++) {
        printf("x=%i und y=%i\n", arr[i].x, arr[i].y);
    }

    printf("-----\n");

    printf("Minimum der x-Werte: %i\n", minX);
    printf("Minimum der y-Werte: %i\n", minY);

    return 0;
}
