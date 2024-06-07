//Uebung 5: Worte und Zeichen 1

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void stat(const char *s) {
    int counterChars = 0, counterWords = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (isspace(s[i]) == 0) {
            counterChars++;
        } //else { counterChars++; }
    }

    for (int i = 0; s[i] != '\0'; i++) {
        //isspace == 0 -> es handelt sich um keine Leerstelle
        //Wenn an Index i eine Leerstelle ist UND (index = 0 ist ODER Leerstelle an index i-1)
        if (isspace(s[i]) == 0 && (i == 0 || isspace(s[i - 1])!=0)) {
            counterWords++;
        }
    }

    printf("Anzahl der Zeichen %i\n", counterChars);

    printf("Anzahl der Worte: %i\n", counterWords);
}

int main() {
    char s[50];

    printf("Geben Sie etwas ein: \n");
    gets(s);
    printf("'%s'\n", s);

    stat(s);

    return 0;
}
