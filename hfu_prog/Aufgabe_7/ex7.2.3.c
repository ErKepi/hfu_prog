// Uebung 2: Taschenrechnerfunktion

#include <stdio.h>

int berechne(char op, int v1, int v2) {
    switch (op) {
        case '+':
            printf("Summe: %i\n-999", v1 + v2);
            break;
        case '-':
            printf("Differenz: %i\n-999", v1 - v2);
            break;
        case '/':
            if (v2 == 0) {
                printf("Durch Null teilen nicht moeglich!");
            } else {
                printf("Quotient: %i\n-999", v1 / v2);
            }

            break;

        case '*':
            printf("Produkt: %i\n-999", v1 * v2);
            break;
        default:
            printf("Fehlerhafte Angaben!");
    }
}

int main() {
    char op;
    int v1, v2;

    printf("Welchen Operator moechten Sie nutzen?\n");
    scanf(" %c", &op);

    printf("Erste Variable:\n");
    scanf("%i", &v1);

    printf("Zweite Variable:\n");
    scanf("%i", &v2);

    //printf("%i\n", berechne(op, v1, v2));

    berechne(op, v1, v2);
}
