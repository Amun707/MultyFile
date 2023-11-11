#include <iostream>
#include "Functions.h"
#include "Structures.h"
#include "Data.h"


int main() {
	system("chcp 1251>nul");
	int n, m;

	//Библиотека с функциями
	/*std::cout << sum(5, 6) << std::endl;
	print_range(10, 20);
	const int size = 5;
	int arr[size]{ 10,20,30,40,50 };
	print_arr(arr, size);*/

	//Библиотека со структурами
	Person p1;
	print_person(p1);

	std::cout << _A << std::endl;
	_A = 7;
	std::cout << _A << std::endl;

	print_arr(_ARR, _SIZE);
	print_range(1, 3);


	return 0;
}