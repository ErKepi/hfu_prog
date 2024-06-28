//
// Created by Erkan Ipek on 26.06.24.
//

#ifndef EX11_SAFEARRAY_H
#define EX11_SAFEARRAY_H


class ex11_safeArray {
private:
    //int array[100];
    int *array; //Blatt 11
    int defSize = 10; //Blatt 11 -1
    //int defSize = 0; // Blatt 11 - 2
    int size = 0;
    int newSize = 0;
    int defVal = 0;

public:
    ex11_safeArray(int saWert);

    ~ex11_safeArray();

    bool setAt(unsigned int pos, int val); // val -> value
    int getAt(unsigned int pos); // pos -> position?

    // Uebung 5: Weiter Methoden
    int getMinimum();

    bool fill(unsigned int pos1, unsigned int pos2, int value);

    // Blatt 11
    void expandArray(unsigned int pos); // eventuell unnoetig, erst get und setAt versuchen anzupassen
    int length();
};

#endif //EX11_SAFEARRAY_H
