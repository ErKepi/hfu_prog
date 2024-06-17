// Uebung 4: Ausgeglichene Klammerung
// Klassen-Datei
// hier werden die Funktionen der Klasse 'Stack' genauer "beschrieben"

#include "stack2.h"
#include <cstdio>

// [Klasse]::[Klassenfunktion] (){...}

void Stack::push(char c) {
    if (_top < 100) {
        _stack[_top++] = c; // char c wird dem Array _stack, an Index _top, zugewiesen. _top wird danach inkrementiert
    } else {
        // Aufgabe 3: Fehlermeldung
        printf("Stack ist voll \n");
    }
}

char Stack::pop() {
    if (_top > 0) {
        return _stack[--_top]; //Dekrementiert bevor der Rueckgabe
    } else {
        // Aufgabe 3: Fehlermeldung
        printf("Stack ist Leer, kein Element zu entfernen.\n");
        return '\0';
    }
}

char Stack::top() {
    if (_top > 0) {
        return _stack[_top - 1];
    } else {
        // Aufgabe 3: Fehlermeldung
        printf("Stack ist leer\n.");
        return '\0';
    }
}

unsigned int Stack::size() {
    return _top;
}

bool Stack::empty() {
    return (_top == 0);
}

void Stack::clear() {
    _top = 0;
}
