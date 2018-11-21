#include "Module.h"
#include <iostream>


Module::Module()
{
}


Module::~Module() //opruimen / destructor
{
	std::vector<Student*>::iterator it = studenten.begin();
	std::vector<Docent*>::iterator ite = docenten.begin();

	while (it != studenten.end()) 
	{
		delete *it;
		it++;
	}

	while (ite != docenten.end())
	{
		delete *ite;
		ite++;
	}
}

Module::Module(std::string nam, int i)
	: naam(nam), ec(i)
{
}

void Module::addStudent(Student * s)
{
	studenten.push_back(s);
	s->updateEC(ec);
}

void Module::removeStudent(std::string naam)
{
	std::vector<Student*>::iterator it = studenten.begin();

	while (it != studenten.end()) {
		if ((*it)->getName() == naam) 
		{
			(*it)->updateEC(ec * -1);
			std::cout << "Escaped from classroom: " << (*it)->getName() << std::endl;
			delete *it;
			it = studenten.erase(it);
		}
		else
		{
			it++;
		}
	}
}

void Module::addDocent(Docent * d)
{
	docenten.push_back(d);
}

void Module::removeDocent(std::string naam)
{
	std::vector<Docent*>::iterator it = docenten.begin();

	while (it != docenten.end()) {
		if ((*it)->getName() == naam) 
		{
			std::cout << (*it)->getName() << "got too old for this shit" << std::endl;
			delete *it;
			it = docenten.erase(it);
		}
		else
		{
			it++;
		}
	}
}

void Module::changeEC(int nieuw)
{
	std::vector<Student*>::iterator it = studenten.begin();

	while (it != studenten.end()) {
		(*it)->updateEC(nieuw - ec);
	}
	std::cout << "The Examencommisie changed the EC for this class from" << ec << "to" << nieuw << std::endl;
	ec = nieuw;
}

void Module::list()
{
	std::cout << "--- Class: " << naam << std::endl;
	std::cout << "--- Teacher: " << std::endl;
	

	std::vector<Docent*>::iterator ite = docenten.begin();
	std::vector<Student*>::iterator it = studenten.begin();
	

	while (ite != docenten.end()) {
		std::cout << (*ite)->getName() << std::endl;
		ite++;
	}

	std::cout << "--- Students: " << std::endl;

	while (it != studenten.end()) {
		std::cout << (*it)->getName() << std::endl;
		it++;
	}

	std::cout << "-------------" << std::endl;
}

