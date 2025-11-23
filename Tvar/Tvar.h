#pragma once
#include <string>


class Tvar {
public:
	Tvar() {};
	virtual ~Tvar() {};

	virtual float obvod() = 0;
	virtual float obsah() = 0;
	virtual std::string jmeno() = 0;
};