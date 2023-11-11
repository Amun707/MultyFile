#pragma once //�� �������

//��� ������ � �������� � ��������� ������-�����������
//���������� ������ ���������� ���������� iostream
#include <iostream>

//��������� �������, ��������� � ������������ �����
int sum(int sum1, int sum2);
void print_range(int a, int b);


//��������� � ������������ ������� ������ �����������
//������� � ������������ �����!
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }" << std::endl;
}