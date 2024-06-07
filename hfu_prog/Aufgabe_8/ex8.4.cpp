// Uebung 4: Datum

#include <stdio.h>

enum monat { Januar = 1, Februar, Maerz, April, Mai, Juni, Juli, August, September, Oktober, November, Dezember };

struct Datum {
    int tag;

    enum monat varMonat;

    int jahr;
};

const char* monatString[] = {
    " ", "Januar", "Februar", "Maerz", "April", "Mai", "Juni", "Juli", "August", "September",
    "Oktober", "November", "Dezember"
};

// Variante 1:
void druckeDatumV1(Datum d) {
    printf("V1: %i. %s %i\n", d.tag, monatString[d.varMonat], d.jahr);
}

// Variante 2
void druckeDatumV2(Datum &d) {
    printf("V2: %i. %s %i\n", d.tag, monatString[d.varMonat], d.jahr);
}

// Variante 3
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

