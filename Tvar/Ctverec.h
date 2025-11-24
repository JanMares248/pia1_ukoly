#pragma once
#include "Tvar.h"

class Ctverec : public Tvar {
private:
	float strana;

public:

	Ctverec(float s);
	~Ctverec() override;

	float obvod() override;
	float obsah() override;
	std::string jmeno() override;
};