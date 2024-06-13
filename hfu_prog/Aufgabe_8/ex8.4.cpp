// Uebung 4: Datum

#include <stdio.h>

enum monat { Januar = 1, Februar, Maerz, April, Mai, Juni, Juli, August, September, Oktober, November, Dezember };

struct Datum {
    int tag;

    enum monat varMonat;

    int jahr;
};

// Pointer, der auf 'enum monat varMonat' zeigt
const char *monatString[] = {
    " ", "Januar", "Februar", "Maerz", "April", "Mai", "Juni", "Juli", "August", "September",
    "Oktober", "November", "Dezember"
};

// Variante 1:
// Uebergabe durch Wert -> Kopie des Arguments, bzw. Variable, wird uebergeben
// Originalargument bleibt unveraendert
void druckeDatumV1(Datum d) {
    printf("V1: %i. %s %i\n", d.tag, monatString[d.varMonat], d.jahr);
}

// Variante 2
// Uebergabe durch Referenz (C++)
// Nimmt Veraenderungen am Original vor
void druckeDatumV2(Datum &d) {
    printf("V2: %i. %s %i\n", d.tag, monatString[d.varMonat], d.jahr);
}

// Variante 3
// Uebergabe durch Zeiger
// Effizient
// Kann zu einer ungueltigen Adresse zeigen -> NULL
// Pfeil '->' notwendig
void druckeDatumV3(Datum *d) {
    printf("V3: %i. %s %i\n", d->tag, monatString[d->varMonat], d->jahr);
}

int main() {
    struct Datum d = {7, Dezember, 2023};

    druckeDatumV1(d);
    druckeDatumV2(d);
    druckeDatumV3(&d);

    return 0;
}
