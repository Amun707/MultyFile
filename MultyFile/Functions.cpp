#include "Functions.h"

//extern - модификация, показывающая программе,
//что данная переменная может быть использована в текущем файле,
//но объявлена она была в каком то другом файле.
extern const double _PI = 3.1416;

//описание реализации функции, прототип которой 
//расположен в заголовочном файле
int sum(int num1, int num2) {
	return num1 + num2;
}

void print_range(int a, int b){
	std::cout << "Pi = " << _PI << std::endl;
	for (int i = a; i <= b; i++)
		std::cout << i << ' ';
	std::cout << std::endl;
}
