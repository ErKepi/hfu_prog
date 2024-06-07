// Uebung 2: Strukturen

#include <stdio.h>

struct Punkt {
    int x;
    int y;
};

int main() {
    struct Punkt p1 = {100, 20};
    struct Punkt p2 = {20, 70};

    int x1 = p1.x;
    int x2 = p2.x;
    int y1 = p1.y;
    int y2 = p2.y;

    int resultX = x1 + x2;
    int resultY = y1 + y2;

    struct Punkt result = {resultX, resultY};

    printf("Summer der x-Werte: %i\n", result.x);
    printf("Summe der y-Werte: %i\n", result.y);

    return 0;
}
