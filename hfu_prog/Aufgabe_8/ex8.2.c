// Uebung 2: Strukturen

#include <stdio.h>

// Grundgeruest eines Objektes
struct Punkt {
    int x;
    int y;
};

int main() {
    struct Punkt p1 = {100, 20};
    struct Punkt p2 = {20, 70};

    int resultX = p1.x + p2.x;
    int resultY = p1.y + p2.y;

    struct Punkt result = {resultX, resultY};

    // struct Punkt summe = {(p1.x+p2.x), (p1.y+p2.y)} --> besser

    printf("Summer der x-Werte: %i\n", result.x);
    printf("Summe der y-Werte: %i\n", result.y);

    return 0;
}
