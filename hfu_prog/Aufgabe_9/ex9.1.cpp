// Uebung 1: Vektorfunktionen

#include "../../../../../Library/Developer/CommandLineTools/SDKs/MacOSX14.4.sdk/usr/include/stdio.h"

struct Vektor {
    float x;
    float y;
};

// liefert den Wert des Skalarprodukts der Vektoren a und b
float skalarProdukt(const Vektor &a, const Vektor &b) {
    float sp = (a.x * b.x) + (a.y * b.y);
    return sp;
}

// liefert die Summe der Vektoren a und b
Vektor vektorSumme(const Vektor &a, const Vektor &b) {
    Vektor vs = {(a.x + b.x), (a.y + b.y)};
    return vs;
}

// liefert das Kreuzprodukt der Vektoren a und b
Vektor kreuzProdukt(const Vektor &a, const Vektor &b) {
    Vektor kp = {((a.y*0)-(b.y*0)), ((a.x*b.y)-(a.y*b.x))};
    return kp;
}

// liefert das Ergebnis der Multiplikation des Skalars faktor mit dem Vektor x
Vektor skalierterVektor(float faktor, const Vektor &x) {
    Vektor sv = {(x.x*faktor),(x.y*faktor)};
    return sv;
}

int main() {
    Vektor a = {10, 20};
    Vektor b = {30, 40};
    Vektor x = {50, 60};

    float faktor = skalarProdukt(a, b);

    Vektor vs = vektorSumme(a, b);
    Vektor kp = kreuzProdukt(a, b);
    Vektor sv = skalierterVektor(faktor, x);

    printf("Skalarprodukt von Vektor a(%.2f, %.2f) und b(%.2f, %.2f): %.2f\n", a.x, a.y, b.x, b.y, skalarProdukt(a, b));
    printf("Vektorsumme von Vektor a(%.2f, %.2f) und b(%.2f, %.2f): x:%.2f, y:%.2f\n", a.x, a.y, b.x, b.y, vs.x, vs.y);
    printf("Kreuzprodukt von Vektor a(%.2f, %.2f) und b(%.2f, %.2f): %.2f, %.2f\n", a.x, a.y, b.x, b.y, kp.x, kp.y);
    printf("Skalierter Vektor von x (%.2f, %.2f) mit Faktor %.2f: %.2f, %.2f\n", x.x, x.y, faktor, sv.x, sv.y);

}
