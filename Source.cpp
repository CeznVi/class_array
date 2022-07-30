#include <iostream>
#include "Array.h"


int main()
{
	//char
	const int size = 10;
	Array<char> arrChar(size);
	arrChar.set(50,60);
	arrChar.print();
	arrChar[0] = 30;
	arrChar.print();
	arrChar(5);
	arrChar.print();
	std::cout << "a = " << a << '\n';


	 
	//int
	Array<int> arrInt(size);
	arrInt.set(0, 10);
	arrInt.print();
	arrInt[1] = 1400;
	arrInt.print();
	arrInt(1000);
	arrInt.print();

	return 0;
}