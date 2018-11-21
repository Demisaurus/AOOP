#include "Student.h"



Student::Student()
{
}

Student::Student(std::string nam)
	: Persoon(nam)
{
}


Student::~Student()
{
}

int Student::getEC()
{
	return ec;
}

void Student::updateEC(int i)
{
	ec += i;
}
