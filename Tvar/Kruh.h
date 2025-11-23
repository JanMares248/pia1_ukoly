#pragma once
#include "Tvar.h" // Dìdíme z Tvar
#include <cmath> 

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

class Kruh : public Tvar {
private:
	float radius;

public:

	Kruh(float r);
	void setRadius(float r);
	float getRadius() const;

	float obvod() override;
	float obsah() override;
	std::string jmeno() override;
};