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
                printf("Durch Null teilen nicht moeglich!");
            } else {
                return v1 / v2;
            }

            break;

        case 'x':
            return v1 * v2;

        default:
            printf("Fehlerhafte Angaben!");
    }
}

//Funktion fuer eine check-Variable, die 1 fuer 'gueltig'
//und 0 fuer ungueltig zurueckgibt
int check(char op, int v2) {
    switch (op) {
        case '+':
        case '-':
        case 'x':
            return 1;
        case '/':
            if(v2==0) {
                return 0;
            }
            else {
            return 1;
        }

        default:
            return 0;
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

    // int check2 = check(op);
    printf("check: %i\n", check(op,v2));

    //Wenn check = 0, also ungueltig, dann wird die
    //Funktion berechne ausgefuehrt, um Default auszugeben
    if (check(op,v2) == 0) {
        berechne(op, v1, v2);
    } else {
        printf("Ergebnis: %i\n -999", berechne(op, v1, v2));
    }
}
