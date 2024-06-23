// Uebungen 3-6

#include "safeArray.h"

// Soll den Eintrag mit Index pos auf den Wert val
// setzen und true zurueckgeben, nur wenn pos einen
// zulaessigen Index fuer das Array darstellt.
bool safeArray::setAt(unsigned int pos, int val) {
    if (pos < 100) {
        array[pos] = val;
        return true;
    }
    return false;
}

// Soll den Wert des Eintrags mit dem Index pos
// zurueckgeben, nur wenn pos einen zulaessigen
// Index fuer das Array darstellt.
// Ist pos kein zulaessiger Index, soll getAt einen
// zweckmässigen Standardwert zurueckgeben
int safeArray::getAt(unsigned int pos) {
    if (pos < 100) {
        return array[pos];
    }
    return -1;
}

// Uebung 4: Konstruktor //
safeArray::safeArray(int saWert) {
    for (int i = 0; i < 100; i++) {
        array[i] = saWert;
    }
}

// Uebung 5: Weitere Methoden //

// Soll den kleinsten Wert im Array zurueckgeben.
int safeArray::getMinimum() {
    int min = array[0];
    for (int i = 1; i < 100; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    return min;
}

// Soll die EIntraege mit Indices (Plural Index)
// pos1 bis pos2 auf den Wert value setzen, und
// true zureuckgeben wenn Indexbereich nicht leer
// ist (pos1 <= pos2) und im zulaessigen Bereich liegt.
bool safeArray::fill(unsigned int pos1, unsigned int pos2, int value) {
    if (pos1 <= pos2 && pos2 < 100) {
        for (unsigned int i = pos1; i <= pos2; i++) {
            setAt(i, value);
        }
        return true;
    }
    return false;
}
