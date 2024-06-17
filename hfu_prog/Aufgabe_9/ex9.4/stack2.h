// Uebung 4: Ausgegliche Klammerung
// Header-Datei
// hier wird die Klasse 'Stack' und ihre Funktionen deklariert

#ifndef STACK_H
#define STACK_H
#include <cstdio>

class Stack {
private:
    char _stack[100];
    int _top;
public:
    Stack() : _top(0) {} // Konstruktor, der _top initialisiert
    void push(char c); // char-Wert wird oben auf dem Stapel abgelegt
    char pop(); // entfernt den obersten char-Wert vom Stapel und gibt den Wert zurueck
    char top(); // liefert Wert des obersten char-Werts im Stapel, ohne diesen zu entfernen
    unsigned int size(); // liefer Anzahl der Eintraege
    bool empty(); // Stapel leer --> True
    void clear(); // Stack wird geleert bzw. initialisiert
};


#endif //STACK_H
