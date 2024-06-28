#include <iostream>
#include "ex11_safeArray.h"

int main() {
    ex11_safeArray sa(13);

    // Aufgabe 1:

    std::cout << sa.getAt(1) << "\n";

    std::cout << "Groesse des Arrays: " << sa.length() << "\n";

    std::cout << sa.getAt(5) << "\n";

    sa.setAt(5, 7);

    std::cout << sa.getAt(5) << "\n";

    sa.setAt(11, 17);

    std::cout << sa.getAt(29) << "\n";

    std::cout << "Groesse des Arrays: " << sa.length() << std::endl;

    // Aufgabe 2:
    //
    // std::cout << "Groesse des Arrays " << sa.length() << std::endl;
    // std::cout << sa.getAt(0) << std::endl;
    // std::cout << sa.getAt(1) << std::endl;
    // std::cout << "Groesse des Arrays " << sa.length() << std::endl;
    //
    // sa.setAt(10, 20);
    // std::cout<<"Groesse des Arrays: " << sa.length() << std::endl;


    return 0;
}
