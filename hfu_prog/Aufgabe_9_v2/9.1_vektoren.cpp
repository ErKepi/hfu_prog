// Uebung 1: Vektorfunktionen

#include <cstdio>

struct Vektor {
    float x;
    float y;
};

struct Vektor3D {
    //TODO: Fuer Kreuzprodukt nochmal implementieren
    float x;
    float y;
    float z;
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
Vektor3D kreuzProdukt(const Vektor &a, const Vektor &b) {
    // Vektor kp = {((a.y*0)-(b.y*0)), ((a.x*b.y)-(a.y*b.x))};
    Vektor3D kp = {(a.y * 0) - (0 * b.y), (0 * b.x) - (0 * a.x), (a.x * b.y) - (b.x * a.y)};
    return kp;
}

// liefert das Ergebnis der Multiplikation des Skalars faktor mit dem Vektor x
Vektor skalierterVektor(float faktor, const Vektor &x) {
    Vektor sv = {(x.x * faktor), (x.y * faktor)};
    return sv;
}

int main() {
    Vektor a = {5, 3};
    Vektor b = {2, 4};
    Vektor x = {1, 1};

    float faktor = skalarProdukt(a, b);

    Vektor vs = vektorSumme(a, b);
    Vektor3D kp = kreuzProdukt(a, b);
    //Vektor kp = kreuzProdukt(a, b);
    Vektor sv = skalierterVektor(faktor, x);

    printf("Skalarprodukt von Vektor a(%.2f, %.2f) und b(%.2f, %.2f): %.2f\n", a.x, a.y, b.x, b.y, skalarProdukt(a, b));
    printf("Vektorsumme von Vektor a(%.2f, %.2f) und b(%.2f, %.2f): x=%.2f, y=%.2f\n", a.x, a.y, b.x, b.y, vs.x, vs.y);
    printf("Kreuzprodukt von Vektor a(%.2f, %.2f) und b(%.2f, %.2f): x=%.2f, y=%.2f, z=%.2f\n", a.x, a.y, b.x, b.y, kp.x, kp.y, kp.z);
    printf("Skalierter Vektor von x (%.2f, %.2f) mit Faktor %.2f: x=%.2f, y=%.2f\n", x.x, x.y, faktor, sv.x, sv.y);
}
