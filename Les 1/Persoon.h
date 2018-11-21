#pragma once
#include <string>

class Persoon
{
public:
	Persoon(std::string nam);
	Persoon();
	virtual ~Persoon();
	std::string getName();

private:
	std::string naam;
};

