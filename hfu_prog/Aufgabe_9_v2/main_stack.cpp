// Uebung 2: Stack
// Main-Datei
// hier werden die Funktionen der Klasse aufgerufen
#include <iostream>
#include "stack.h"

int main() {
    Stack s; // Instanzbildung

    s.clear();
    s.push('a');
    s.push('b');
    s.push('c');

    printf("Oberstes Element: '%c'\n", s.top());

    s.pop();

    printf("Anzahl der Elemente: %u\n", s.size());

    s.pop();

    printf("Oberstes Element: '%c'\n", s.top());

    //s.pop();

    printf("Ist Stack leer? %s\n", (s.empty()?"ja":"nein"));
}

