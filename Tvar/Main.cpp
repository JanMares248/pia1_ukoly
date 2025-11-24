#include "Ctverec.h"
#include "Kruh.h"
#include <iostream>


int main() {
    Kruh k(5.0f);

    std::cout << "Nazev tvaru: " << k.jmeno() << std::endl;
    std::cout << "Polomer: " << k.getRadius() << std::endl;
    std::cout << "Obvod: " << k.obvod() << std::endl;
    std::cout << "Obsah: " << k.obsah() << std::endl;


    Ctverec c(8.5f);


    std::cout << "Nazev tvaru: " << c.jmeno() << std::endl;
    std::cout << "Delka strany: 8.5" << std::endl;
    std::cout << "Obvod: " << c.obvod() << std::endl;
    std::cout << "Obsah: " << c.obsah() << std::endl;


    return 0;
}