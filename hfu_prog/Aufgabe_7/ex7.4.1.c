// Uebung 4: ggT
// Variante 1: while-Schleife

#include <stdio.h>

long ggT(long x, long y) {

    long temp;

    while (temp != 0) {
        temp = x % y;
        x = y;
        y = temp;
    }

    return x;
}

int main() {
    long x, y;

    printf("Es wird der ggT gesucht.\n");
    printf("Geben Sie den ersten Wert an: \n");
    scanf("%ld", &x);

    printf("Geben Sie den zweiten Wert an: \n");
    scanf("%ld", &y);

    printf("Der ggT von %ld und %ld ist %ld", x, y, ggT(x, y));

    return 0;
}
