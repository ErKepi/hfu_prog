// Uebung 3; Kommandozeilenaufruf
//  Beispiel auf der Folie, Seite 139

#include <stdio.h>
#include <stdlib.h>

int berechne(char op, int v1, int v2) {
    switch (op) {
        case '+':
            return v1 + v2;
        case '-':
            return v1 - v2;
        case 'x':
            return v1 * v2;
        case '/':
            if (v2 == 0) {
                printf("Durch Null kann nicht geteilt werden!\n");
                return -999;
            } else {
                return v1 / v2;
            }
        default:
            return -999;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 4)
        return -1;

    char op = argv[1][0]; //erster Char vom String
    int v1 = atoi(argv[2]);
    int v2 = atoi(argv[3]);

    printf("Ergebnis: %i\n", berechne(op, v1, v2));

    return 0;
}

// ggc -o rechner [dateiname]
// rechner operator v1 v2
