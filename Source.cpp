#include <iostream>
#include <Windows.h>
#include "Array.h"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//char
	const int size = 10;
	Array<char> arrChar(size);
	arrChar.set(50,60);
	arrChar.print();
	arrChar[0] = 30;
	arrChar.print();
	arrChar(5);
	arrChar.print();
	std::cout << "������������ �� ���� arrChar : " << (int)arrChar << '\n';
	std::cout << "������������ �� char arrChar : " << (char*)arrChar << '\n';
		 
	//int
	Array<int> arrInt(size);
	arrInt.set(50, 60);
	arrInt.print();
	//������������ ������� �������������� ��������� �������� �����
	arrInt[1] = 0;
	arrInt.print();
	arrInt(2);
	std::cout << "�������������� ��������� (): \n";
	arrInt.print();
	std::cout << "������������ �� ���� arrInt : " << (int)arrInt << '\n';
	std::cout << "������������ �� char arrInt : " << (char*)arrInt << '\n';

	return 0;
}