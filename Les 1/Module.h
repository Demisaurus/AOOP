#pragma once
#include <string>
#include "Docent.h"
#include "Student.h"
#include <vector>

class Module
{
public:
	Module();

	virtual ~Module();

	Module(std::string nam, int i);

	void addStudent(Student* s);

	void removeStudent(std::string naam);

	void addDocent(Docent* d);

	void removeDocent(std::string naam); 

	void changeEC(int nieuw);

	void list();

private:
	int ec;

	std::string naam;

	std::vector<Student*> studenten;
	std::vector<Docent*> docenten;
};


