#include <iostream>

template <typename T>
void my_swap(T num1, T num2) {
	T tmp = num1;
	num1 = num2;
	num2 = tmp;
}

template <typename T>
void p_swap(T* pnum1, T* pnum2) {
	T tmp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = tmp;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//��������� �� ����������
	/*n = 10; m = 20;
	//��������� - ����������, ��������� ��� �������� � ���� ������ N-�� ������� ������. ��������, ����� ��������� ����� ����������.
	std::cout << "n = " << n << std::endl; //�������� ����������
	std::cout << "&n = " << &n << std::endl; //����� ����������
	int *pn = &n; //�������� ���������, ������������� �� ���������� n

	std::cout << "pn = " << pn << std::endl;
	std::cout << "*pn = " << *pn << std::endl;

	//������������� ��������� - ��������, ����������� ������ � ���������� � ����������� ���������� � �������, �� ������� ��������� ���������
	*pn = 15; //��������� � ���������� n ����� ������������� ��������� pn
	std::cout << "����� n = " << n << std::endl;

	pn = &m; //��������������� ��������� �� ���������� m
	std::cout << "&m = " << &m << std::endl;
	std::cout << "pn = " << &m << std::endl;

	int* pm = &m;
	std::cout << "pm = " << pm << std::endl;
	*pm = 25;
	std::cout << "m = " << m << std::endl;
	std::cout << "*pn = " << *pn << std::endl;
	std::cout << "*pm = " << *pm << std::endl;*/

	//��������� � ��������
	/*const int size = 5;
	int arr[size]{ 9, 3, 2, 7, 5 };
	int* pa2 = &arr[2];
	std::cout << "*pa2 = " << *pa2 << std::endl;
	pa2++;
	std::cout << "*pa2 = " << *pa2 << std::endl;
	//���������� ���������� - ������� ������ ���������� ������������ �� �������� �������� ������/����� � ����������� �� ������������ � ��� ��������/��������� ��������������.

	//����������� ���������� ����������:
	//1. ������ �������� � ���������;
	//2. ������ ���������� ������, �� ����� ��������;
	//3. ������ �������� � ������������ ����� ������.

	pa2 = &arr[0];
	for (int i = 0; i < size; i++)
		std::cout << *(pa2 + i) << ' ';
	std::cout << std::endl;

	std::cout << "arr = " << arr << std::endl;
	std::cout << "pa2 = " << pa2 << std::endl;

	//��� ������� - ��������� �� ��� ������ �������, ��� �� ��������� �� ����� � ������, �� ������� ���������� ������������������ ���������. ������ ��������� �� ����� ���� ��������� �� ������ ������� ������

	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += *(arr + i);
	std::cout << "�����: " << sum << std::endl;
	//arr = &n; //������!

	//����������� ��������� �� ������� �� ���� ������, �� ������� �� ���������. ������� �� �� ����������� ��. � 64-������ - 8 ����, � 32-������ - 4 �����.*/

	//��������� � �������
	n = 7; m = 15;
	std::cout << n << ' ' << m << std::endl;
	//my_swap(n, m); �� ��������, �. �. ��������� - ����� ����������
	p_swap(&n, &m);
	std::cout << n << ' ' << m << std::endl;

	//������� ���������� ����������:
	//1. ������ � ���������;
	//2. ��������� ������ � ������;
	//3. ��������� ������������ ������;
	//4. �������� ������.

	return 0;
}