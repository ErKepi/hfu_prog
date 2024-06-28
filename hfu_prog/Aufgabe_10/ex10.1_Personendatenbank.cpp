#include <cstdio>
#include <string.h>

// Uebung 1: Personendatenbank
enum monat { Januar = 1, Februar, Maerz, April, Mai, Juni, Juli, August, September, Oktober, November, Dezember };

struct Datum {
    int tag;
    enum monat varMonat;
    int jahr;
};

struct Person {
    char name[20];
    char vorname[20];
    Datum geburtstag;
};

const char *monatString[] = { // " " ist Platzhalter fuer Index 0
    " ", "Januar", "Februar", "Maerz", "April", "Mai", "Juni", "Juli", "August", "September", "Oktober", "November",
    "Dezemeber"
};

Person personen_array[5] = {
    {"Einstein", "Albert", 14, Maerz, 1879},
    {"Oppenheimer", "J. Robert", 22, April, 1904},
    {"Tesla", "Nikola", 10, Juli, 1856},
    {"Newton", "Isaac", 4, Januar, 1643},
    {"Kopernikus", "Nikolaus", 19, Februar, 1473}
};

void findeGeburtstag(char *name, char *vorname) {
    //int check = 0;
    for (int i = 0; i < 5; i++) {
        //strcmp()==0 heisst, die Strings gleichen sich
        if (strcmp(vorname, personen_array[i].vorname) == 0 && strcmp(name, personen_array[i].name) == 0) {
            printf("%s %s wurde am %i. %s %i geboren.\n", personen_array[i].vorname, personen_array[i].name,
                   personen_array[i].geburtstag.tag, personen_array[i].geburtstag.varMonat[monatString],
                   personen_array[i].geburtstag.jahr);
            //check = 1;
            //break;
            return;
        }
    }
    // if (check != 1) {
        printf("Zu der Eingabe wurde kein Eintrag gefunden.\n");
    //}
}

int main() {
    int personenzahl = 5;
    char tempVorname[20], tempName[20];
    printf("Geben Sie einen der folgenden Namen ein: \n");
    printf("-------\n");
    for (int i = 0; i < personenzahl; i++) {
        printf("%s %s \n", personen_array[i].vorname, personen_array[i].name);
    }
    printf("-------\n");
    printf("Vorname: ");
    scanf("%s", tempVorname);
    printf("\nNachname: ");
    scanf("%s", tempName);
    printf("-------\n");
    findeGeburtstag(tempName, tempVorname);
    return 0;
}
