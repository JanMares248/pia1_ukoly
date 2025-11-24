#include "Kruh.h"
#include <iostream>

Kruh::Kruh(float r) : radius(r) {
    if (radius < 0) {
        radius = 0;
    }
}
Kruh::~Kruh() {
}


void Kruh::setRadius(float r) {
    if (r >= 0) {
        radius = r;
    }
    else {
        std::cerr << "Chyba: Polomìr nemùe bıt zápornı." << std::endl;
        radius = 0;
    }
}

float Kruh::getRadius() const {
    return radius;
}


float Kruh::obvod() {
    return 2.0f * (float)M_PI * radius;
}


float Kruh::obsah() {
    return (float)M_PI * radius * radius;
}


std::string Kruh::jmeno() {
    return "Kruh";
}