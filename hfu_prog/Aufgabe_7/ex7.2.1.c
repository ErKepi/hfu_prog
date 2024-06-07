// Uebung 2: Taschenrechnerfunktion

#include <stdio.h>

int berechne(char op, int v1, int v2) {
    switch (op) {
        case '+':
            return v1 + v2;

        case '-':
            return v1 - v2;

        case '/':
            if (v2 == 0) {
                return -999;
            }

            return v1 / v2;

        case '*':
            return v1 * v2;

        default:
            return -999;
    }
}

int main() {
    char op;
    int v1, v2;

    printf("Welchen Operator moechten Sie nutzen?\n");
    scanf("%c", &op);

    printf("Erste Variable:\n ");
    scanf("%i", &v1);

    printf("Zweite Variable:\n ");
    scanf("%i", &v2);

    printf("Ergebnis: %i\n", berechne(op, v1, v2));
}
