#include "Structures.h"

void print_person(const Person& P){
	std::cout << "Имя: " << P.name << std::endl;
	std::cout << "Возраст: " << P.age << std::endl;
	std::cout << "Должность: " << P.job << std::endl;
	std::cout << "Зарплата: " << P.salary << std::endl;
}
