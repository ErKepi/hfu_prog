// Uebung 2: Stack
// Klassen-Datei
// hier werden die Funktionen der Klasse 'Stack' genauer "beschrieben"

#include "stack.h"
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
    char _temp = _stack[_top];
    _top--;
    printf("Entfernter Char: %c", _temp);
    if (_top < 0) {
        // Aufgabe 3: Fehlermeldung
        printf("Stack ist unter 0, _top wird auf 0 zurueckgesetzt.\n");
        _top = 0;
    }
}

char Stack::top() {
    if (_top>0) {
        return  _stack[_top-1];
    } else {
        // Aufgabe 3: Fehlermeldung
        printf("Stack ist leer\n.");
        return -1;
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


