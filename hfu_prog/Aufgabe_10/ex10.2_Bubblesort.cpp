// Uebung 2: Bubblesort

#include <cstdio>

void sort(int *a, unsigned int n) {
    int temp;

    for (int i = 0; i < n; i++) {
        // n - 1, da das letzte Element der Liste nicht
        // mit j + 1 verglichen werden kann
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int array[] = {-15, 7, 13, 24, 9, 25};
    sort(&array[0], 6);
    for (int i = 0; i < 6; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}
