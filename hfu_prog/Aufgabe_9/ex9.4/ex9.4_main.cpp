// Uebung 2: Ausgeglichene Klammerung
// Main-Datei
// hier werden die Funktionen der Klasse aufgerufen
#include <cstdio>
//#include <stack>

#include "stack2.h"

// bool bracketsBalanced(char *input, Stack &s) {
//     for (int i = 0; input[i] != '\0'; i++) {
//         if (input[i] == '{' || input[i] == '[' || input[i] == '(') {
//             s.push(input[i]);
//         } else if (input[i] == '}' || input[i] == ']' || input[i] == ')') {
//             if (s.empty()) {
//                 printf("Klammern schliessen sich nicht korrekt.\n");
//                 return false;
//             }
//             char topChar = s.top();
//             if ((topChar == '{' && input[i] == '}') || (topChar == '[' && input[i] == ']') || (
//                     topChar == '(' && input[i] == ')')) {
//                 s.pop();
//             } else {
//                 return false;
//             }
//         } else {
//
//         }
//     }
//     if(s.empty()==false) {
//         return false;
//     }
//
//     return true;
// }
//
//
// int main() {
//     Stack s;
//     char input[100];
//     printf("String von Klammern eingeben: \n");
//     scanf("%s", input);
//
//     if (bracketsBalanced(input, s)) {
//         printf("Die Ausklammerung ist ausgewogen.\n");
//     } else {
//         printf("Klammerung unausgewogen.\n");
//     }
//
//     return 0;
// }


// Neuversuch

bool bracketsBalanced(const char *input, Stack& s) // Stack wird referenziert
{
    char temp;

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == '(' || input[i] == '[' || input[i] == '{')
        {
            s.push(input[i]);
        }
        else if (input[i] == ')' || input[i] == ']' || input[i] == '}')
        {
            if (s.empty()) // Wenn nach dem Check der oeffnenden Klammern keine gefunden wurde,
                            //ist der Stack leer und kann nicht weiter geprueft werden mit deren Counterpart -> false
            {
                return false;
            }

            temp = s.top();
            if ((temp == '(' && input[i] == ')') ||
                (temp == '[' && input[i] == ']') ||
                (temp == '{' && input[i] == '}'))
            {
                s.pop(); // passende Paare -> pop() -> Stapel wird reduziert
            }
            else
            {
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

    if (bracketsBalanced(input, s)) {
        printf("Ausgewogen\n");
    } else {
        printf("Unausgewogen.\n");
    }
}
