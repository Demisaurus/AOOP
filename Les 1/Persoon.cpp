#include "Persoon.h"



Persoon::Persoon(std::string nam)
	: naam(nam)
{
}

Persoon::Persoon()
	: naam(std::string("noname"))
{
}


Persoon::~Persoon()
{
}

std::string Persoon::getName()
{
	return naam;
}
