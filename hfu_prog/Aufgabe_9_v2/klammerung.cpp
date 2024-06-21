// Uebung 2-6: Ausgeglichene Klammerung
// Main-Datei
// hier werden die Funktionen der Klasse aufgerufen
#include <cstdio>
#include "stack.h"


bool klammerungAusgewogen(const char *input, Stack &s) // Stack wird referenziert
{
    char temp;

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '(' || input[i] == '[' || input[i] == '{') {
            s.push(input[i]);
        } else if (input[i] == ')' || input[i] == ']' || input[i] == '}') {
            if (s.empty()) // Wenn nach dem Check der oeffnenden Klammern keine gefunden wurde,
            //ist der Stack leer und kann nicht weiter geprueft werden mit deren Counterpart -> false
            {
                printf(
                    "Fehler - Es konnte zu der schliessenden Klammer kein passendes Gegenstueck auf dem Stack gefunden werden.\n");
                return false;
            }

            //temp = s.top();
            if ((s.top() == '(' && input[i] == ')') ||
                (s.top() == '[' && input[i] == ']') ||
                (s.top() == '{' && input[i] == '}')) {
                s.pop(); // passende Paare -> pop() -> Stapel wird reduziert
            } else {
                return false;
            }
        }
    }
    return s.empty(); // leerer Stapel -> Alle Klammern konnten ihrem Gegenstueck zugeordnet werden -> true
}

int main() {
    Stack s;
    char input[100];

    printf("Geben Sie etwas ein: \n");
    scanf("%s", input);

    if (klammerungAusgewogen(input, s)) {
        printf("Ausgewogen\n");
    } else {
        printf("Unausgewogen.\n");
    }
}
