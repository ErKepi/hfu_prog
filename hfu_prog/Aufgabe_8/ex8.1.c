// Uebung 1: Primzahlen

#include <stdbool.h>
#include <stdio.h>

// Ziel: Eingabe des x-Wert und boolische Ausgabe
bool prim(int x) {

    bool check =1

    if(x<=0) {
        printf("Falsche Eingabe");
        return false;
    }
    if (x==1) {
        printf("1 ist keine Primzahl\n");
        return false;
    }
    if (x>=2) {
        if (x/x==1 && x/1 == x) {
            printf("%i ist eine Primzahl\n", x);
            return true;
        }
        printf("%i ist keine Primzahl\n", x);
    }
    // if (x / x == 1 && x / 1 == x) {
    //     return true;
    // }
    // return false;

}

int main() {
    int x, y;

    printf("Geben Sie einen Wert fuer x ein: \n");
    scanf("%i\n", x);

    // if(prim(x)) {
    //     printf("%i ist eine Primzahl\n", x);
    // }
    // printf("%i ist keine Primzahl\n", x);

    prim(x);
}
