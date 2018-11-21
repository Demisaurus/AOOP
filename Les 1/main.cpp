#include <iostream>
#include "Module.h"

int main() {
	Module* tekenen = new Module("Draw Life", 3);
	Module* programming = new Module("Programming", 5);
	Module* leveldesign = new Module("Level Design", 2);

	tekenen->addDocent(new Docent("Edwin"));
	tekenen->addStudent(new Student("Piet"));
	tekenen->addStudent(new Student("Jantje"));
	tekenen->addStudent(new Student("Klaas"));
	tekenen->addStudent(new Student("Vlinder"));
	tekenen->addStudent(new Student("Henkie"));
	tekenen->addStudent(new Student("Bob"));

	programming->addDocent(new Docent("Raf"));
	programming->addStudent(new Student("Henkie"));
	programming->addStudent(new Student("Vlinder"));
	programming->addStudent(new Student("Bloem"));
	programming->addStudent(new Student("Madelief"));
	programming->addStudent(new Student("Kees"));
	programming->addStudent(new Student("Bob"));

	leveldesign->addDocent(new Docent("Corné"));
	leveldesign->addStudent(new Student("Jantje"));
	leveldesign->addStudent(new Student("Madelief"));
	leveldesign->addStudent(new Student("Kees"));
	leveldesign->addStudent(new Student("Vlinder"));
	leveldesign->addStudent(new Student("Piet"));
	leveldesign->addStudent(new Student("Bloem"));

	tekenen->list();
	programming->list();
	leveldesign->list();
	tekenen->removeStudent("Klaas");
	programming->removeStudent("Kees");
	leveldesign->removeStudent("Piet");
	tekenen->list();
	programming->list();
	leveldesign->list();

	return 0;
}
