#include "Library.h"

void DisplayPart_1(double* Array, int n)
{
	std::cout << "\nSize of matrix= " << n << "\nElements of matrix:" << std::endl;

	for (int i = 0; i < n; i++)
	{
		std::cout << *(Array + i) << " ";
		std::cout << std::endl;
	}
}