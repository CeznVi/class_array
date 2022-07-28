#include <iostream>
#include "Array.h"


int main()
{
	//char
	Array<char> arrChar(10);
	arrChar.set(50,60);
	arrChar.print();
	arrChar[10] = "s";
	arrChar(5);
	arrChar.print();



	 
	//int
	Array<int> arrInt(10);
	arrInt.set(0, 10);
	arrInt.print();
	arrInt[1] = 1400;
	arrInt.print();
	arrInt(1000);
	arrInt.print();

	return 0;
}