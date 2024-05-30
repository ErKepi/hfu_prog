// Uebung 1: Zweierpotenzen

#include <stdio.h>
#include <math.h>

void zp(int a, int b)
{
    //int array[b];

    if (a < 0 || b <= 0 || b < a)
    {
        printf("Fehlerhafte Eingaben!\n");
    }
    else
    {
        //Inner scope
        int powTwo = 0;
        int n = 0;

        while (powTwo <= b)
        {
            powTwo = pow(2, n);
            n++;
            if (powTwo >= a && powTwo <= b)
            {
                printf("%i ", powTwo);
            }
        }
    }
}

int main()
{
    int a, b;

    printf("Geben Sie den ersten Wert an: ");
    scanf("%i", &a);

    printf("Geben Sie den zweiten Wert an: ");
    scanf("%i", &b);

    // printf("%i\n", pow(a, b));

    zp(a, b);

    return 0;
}
