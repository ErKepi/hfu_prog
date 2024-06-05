//Uebung 5: Worte und Zeichen 1

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void stat(const char *s) {
    int counterChars = 0, counterString = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (isspace(s[i]) != 0) {
        } else { counterChars++; }
    }

    for (int i = 0; s[i] != '\0'; i++) {
        //Wenn an Index i Leerstelle UND index = 0 ist ODER Leerstelle an index i-1
        if (isspace(s[i]) == 0 && (i == 0 || isspace(s[i - 1]))) {
            counterString++;
        }
    }
    // if (s[0] == '\0' || s[length] == '\0') {
    //         counterString -= 1;
    //     }
    //     // for (int i = 0; s[i] != '\0'; i++) {
    //     if (isspace(s[i]) == 0) {
    //         checkSpace = 0;
    //     } else {
    //         if (checkSpace == 0) {
    //             counterString++;
    //             checkSpace = 1;
    //}

    printf("Anzahl der Zeichen %i\n", counterChars);

    printf("Anzahl der Worte: %i\n", counterString);
}

int main() {
    char s[50];

    printf("Geben Sie etwas ein: \n");
    gets(s);
    printf("%s", s);

    stat(s);

    return 0;
}
