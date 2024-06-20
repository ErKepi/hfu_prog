// Uebung 3: Sicheres Array

#ifndef SAFEARRAY_H
#define SAFEARRAY_H



class safeArray {
private:
    int array[100];
public:
    safeArray(int saWert = 0); // Konstruktor
    bool setAt(unsigned int pos, int val); // val -> value
    int getAt(unsigned int pos); // pos -> position?

    // Uebung 5: Weiter Methoden
    int getMinimum();
    bool fill(unsigned int pos1, unsigned int pos2, int value);
};



#endif //SAFEARRAY_H
