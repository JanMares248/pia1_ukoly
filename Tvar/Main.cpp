#include "Ctverec.h"
#include "Kruh.h"
#include <iostream>


int main() {
    Kruh k(5.0f);

    Tvar* tvar_ptr = &k;

    std::cout << "Nazev tvaru: " << tvar_ptr->jmeno() << std::endl;
    std::cout << "Polomer: " << k.getRadius() << std::endl;
    std::cout << "Obvod: " << tvar_ptr->obvod() << std::endl;
    std::cout << "Obsah: " << tvar_ptr->obsah() << std::endl;


    Ctverec c(8.5f);


    tvar_ptr = &c;

    std::cout << "Nazev tvaru: " << tvar_ptr->jmeno() << std::endl;
    std::cout << "Delka strany: 8.5" << std::endl;
    std::cout << "Obvod: " << tvar_ptr->obvod() << std::endl;
    std::cout << "Obsah: " << tvar_ptr->obsah() << std::endl;


    return 0;
}
