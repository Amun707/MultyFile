#include "Structures.h"

void print_person(const Person& P){
	std::cout << "���: " << P.name << std::endl;
	std::cout << "�������: " << P.age << std::endl;
	std::cout << "���������: " << P.job << std::endl;
	std::cout << "��������: " << P.salary << std::endl;
}
