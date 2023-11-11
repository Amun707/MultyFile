#pragma once

#include <iostream>
#include <string>

struct Person {
	std::string name = "noname";
	int age = 18;
	std::string job = "programer";
	int salary = 50000;
};

void print_person(const Person& P);