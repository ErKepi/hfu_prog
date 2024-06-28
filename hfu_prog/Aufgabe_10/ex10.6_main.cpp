// Uebungen 3 - 6
#include <cstdio>
#include "safeArray.h"
#include "safeArray.h"
#include "safeArray.h"
#include "safeArray.h"

int main() {

    // // Test der safeArray-Klasse //
    // safeArray sa1;
    //
    // sa1.setAt(10, 100);
    // printf("Wert an pos 10: %d \n", sa1.getAt(10));
    //
    // sa1.setAt(101, 10);
    // printf("Wert an pos 101: %d \n", sa1.getAt(101));
    //
    // // safeArray-Konstrukt mit Parameter //
    // safeArray sa2(105);
    // printf("Wert an pos 5 von sa2: %d\n", sa2.getAt(5));

    // Test der fill-Methode //
    safeArray sa3(3);

    sa3.fill(10, 60, 6);
    printf("fill-Methode von i 10 bis 60 mit dem Wert 6: \n");
    for (int i = 10; i <= 60; i++) {
        printf("Array[%d] = %d \n", i, sa3.getAt(i));
    }

    return 0;
}
