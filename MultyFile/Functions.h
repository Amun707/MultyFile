#pragma once //не трогать

//Для работы с консолью в отдельных файлах-библиотеках
//необходимо заново подключать библиотеку iostream
#include <iostream>

//Прототипы функций, описанные в заголовочном файле
int sum(int sum1, int sum2);
void print_range(int a, int b);


//шаблонные и встраиваемые функции всегда описываются
//целиком в заголовочном файле!
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }" << std::endl;
}