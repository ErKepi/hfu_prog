//
// Created by Erkan Ipek on 26.06.24.
//

#include "ex11_safeArray.h"

// Uebung 5: Weitere Methoden //

// Soll den kleinsten Wert im Array zurueckgeben.
int ex11_safeArray::getMinimum() {
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
// bool ex11_safeArray::fill(unsigned int pos1, unsigned int pos2, int value) {
//     if (pos1 <= pos2 && pos2 < 100) {
//         for (unsigned int i = pos1; i <= pos2; i++) {
//             setAt(i, value);
//         }
//         return true;
//     }
//     return false;
// }

//Verbesserung:
bool ex11_safeArray::fill(unsigned int pos1, unsigned int pos2, int value) {
    if (pos1 > pos2 || pos1 >= 100 || pos2 >= 100) {
        return false;
    }
    for (unsigned int i = pos1; i <= pos2; i++) {
        setAt(i, value);
    }
    return true;
}

int ex11_safeArray::length() {
    return size;
}

// void ex11_safeArray::expandArray(unsigned int pos) {
//     if (pos>size) {
//
//     }
// }

// Konstruktor - Aufgabe 1
ex11_safeArray::ex11_safeArray(int saWert) {
    defVal = saWert;
    this->array = new int[defSize]; // Blatt 11
    size = defSize;
    for (int i = 0; i < defSize; i++) {
        array[i] = saWert;
    }
}

// Aufgabe 2
// ex11_safeArray::ex11_safeArray(int saWert) {
//     defVal = saWert;
//     this->array = new int[defSize]; // Blatt 11
//     size = defSize;
//     for (int i = 0; i <= size; i++) {
//         array[i] = saWert;
//     }
// }

// Destruktor
ex11_safeArray::~ex11_safeArray() {
    delete[]array;
}

// expand - Blatt 11 - 1
void ex11_safeArray::expandArray(unsigned int pos) {
    int *newArray = new int[pos];
    for (int i = 0; i < size + (pos - size); i++) {
        newArray[i] = array[i];
    }
    delete[]array;
    array = newArray;
    size = pos + 1; // size+=pos-size-1
}

// getAt - Blatt 11 - 1
int ex11_safeArray::getAt(unsigned int pos) {
    //TODO;
    if (pos > size) {
        expandArray(pos);
        array[pos] = defVal;
        return array[pos];
    }
    return array[pos];
}

//setAt - Blatt 11 - 1
bool ex11_safeArray::setAt(unsigned int pos, int val) {
    // Done
    if (pos > size) {
        expandArray(pos);
        array[pos] = val;
        return true;
    }
    return false;
}
