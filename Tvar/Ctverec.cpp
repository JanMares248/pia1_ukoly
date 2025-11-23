#include "Ctverec.h"
#include <iostream>

Ctverec::Ctverec(float s) : strana(s) {
    if (strana < 0) {
        strana = 0;
    }
}

float Ctverec::obvod() {
    return 4.0f * strana;
}

float Ctverec::obsah() {
    return strana * strana;
}

std::string Ctverec::jmeno() {
    return "Ctverec";
}