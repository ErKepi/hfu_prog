// Uebung 2: Taschenrechnerfunktion

#include <stdio.h>

int berechne(char op, int v1, int v2)
{
    switch (op)
    {
    case '+':
        return v1 + v2;
        break;

    case '-':
        return v1 - v2;
        break;

    case '/':
        return v1 / v2;
        break;

    case 'x':
        return v1 * v2;
        break;

    default:
        return -999;
    }
}

int main()
{
    char op;
    int v1, v2, check;

    printf("Welchen Operator moechten Sie nutzen?\n");
    scanf("%c", &op);

    printf("Erste Variable:\n ");
    scanf("%i", &v1);

    printf("Zweite Variable:\n ");
    scanf("%i", &v2);

    printf("Ergebnis: %i\n", berechne(op, v1, v2));
}
