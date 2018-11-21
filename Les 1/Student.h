#pragma once
#include "Persoon.h"
class Student :
	public Persoon
{
public:
	Student();
	Student(std::string nam);
	virtual ~Student();
	int getEC();
	void updateEC(int i);

private:
	int ec;
};

