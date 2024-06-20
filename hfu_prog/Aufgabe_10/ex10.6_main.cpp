// Uebungen 3 - 6
#include <cstdio>
#include "safeArray.h"

int main() {

    // Test der safeArray-Klasse //
    safeArray sa1;

    sa1.setAt(10, 100);
    printf("Wert an pos 10: %d \n", sa1.getAt(10));

    sa1.setAt(101, 10);
    printf("Wert an pos 101: %d \n", sa1.getAt(101));

    // safeArray-Konstrukt mit Parameter //
    safeArray sa2(10);
    printf("Wert an pos 1 von sa2: %d", sa2.getAt(1));

    // Test der fill-Methode //
    safeArray sa3(2);

    sa3.fill(10, 110, 6);
    printf("fill-Methode von i 10 bis 110 mit dem Wert 6: \n");
    for (int i = 10; i <= 110; i++) {
        printf("Array[%d] = %d \n", i, sa3.getAt(i));
    }

    return 0;
}
