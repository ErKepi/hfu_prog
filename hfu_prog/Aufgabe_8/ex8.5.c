// Uebung 5: Teilstrings zählen

#include <stdio.h>

// int vorkommen(const char *s, const char *m) {
//     int check, slen = 0, mlen = 0, counter = 0, i = 0;
//
//     // check-Variable als Boolersatz
//
//     while (s[i] != '\0') {
//         slen++;
//         i++;
//     }
//
//     i = 0;
//
//     while (m[i] != '\0') {
//         mlen++;
//         i++;
//     }
//
//     // Outer Loop: geht Schritt fuer Schritt durch den String s
//     for (i = 0; i < slen - mlen + 1; i++) {
//         check = 1;
//
//         // Inner Loop
//         for (int j = 0; j < mlen; j++) {
//             if (m[j] != s[i + j]) {
//                 check = 0;
//                 break; //beendet die Schleife, hier: Inner Loop
//             }
//         }
//         if (check == 1)
//             counter++;
//     }
//     return counter;
// }

int vorkommen(const char *s, const char *m) {
    int slen = 0, mlen = 0, counter = 0, i = 0, j = 0;


    while (s[i] != '\0') {
        slen++;
        i++;
    }

    i = 0;

    while (m[i] != '\0') {
        mlen++;
        i++;
    }

    // Outer Loop: geht Schritt fuer Schritt durch den String s
    for (i = 0; s[i] != '\0'; i++) {
        // Inner Loop
        for (j = 0; j < mlen; j++) {
            if (m[j] != s[i + j]) {
                break; //beendet die Schleife, hier: Inner Loop, j wird auf 0 zurueckgesetzt
            }
        }
        if (j == mlen)
            counter++;
    }
    return counter;
}

int main() {
    char s[50], m[50];

    printf("Geben Sie etwas ein: \n");
    gets(s);
    printf("Muster nach dem gesucht werden soll: \n");
    gets(m);

    printf("Das Muster kommt %d Mal vor.", vorkommen(s, m));
}
