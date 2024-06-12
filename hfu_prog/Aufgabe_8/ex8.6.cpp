// Uebung 6: Funktionen mit Strukturen als Parameter

#include <stdio.h>

enum monat { Januar = 1, Februar, Maerz, April, Mai, Juni, Juli, August, September, Oktober, November, Dezember };

struct Datum {
    int tag;
    enum monat varMonat;
    int jahr;
};

// const char* monatString[] = {
//     " ", "Januar", "Februar", "Maerz", "April", "Mai", "Juni", "Juli", "August", "September",
//     "Oktober", "November", "Dezember"
// };

bool bevor(const Datum& a, const Datum& b) {
    if (a.jahr == b.jahr) {
        if (a.varMonat<b.varMonat)
            return true;
    }

    if (a.jahr==b.jahr && a.varMonat==b.varMonat) {
        if (a.tag<b.tag)
            return true;
    }

    if (a.jahr<b.jahr)
        return true;

    // //if (a.jahr==b.jahr&&a.varMonat==b.varMonat&&a.tag==b.tag)
    //     printf("Beide Angaben gleichen sich.\n");

    return false;
}

int main() {
    Datum a;
    Datum b;
   // Datum b = {1, 1, 1999};

    printf("Erstes Datum\n");
    printf("Tag: \n");
    scanf("%i", &a.tag);
    printf("Monat: \n");
    scanf("%i", &a.varMonat);
    printf("Jahr: \n");
    scanf("%i", &a.jahr);

    printf("-------\n");

    printf("Zweites Datum\n");
    printf("Tag: \n");
    scanf("%i", &b.tag);
    printf("Monat: \n");
    scanf("%i", &b.varMonat);
    printf("Jahr: \n");
    scanf("%i", &b.jahr);

    if (bevor(a,b)) {
        printf("Das erste Datum findet VOR dem zweiten statt.");
    }
    else
        printf("Das erste Datum findet NACH dem zweiten statt.");

   // printf("%i. %s %i", a.tag, a.varMonat, a.jahr);
}