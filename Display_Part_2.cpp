#include "Library.h"

void DisplayPart_2(int** Array, int n)
{
	std::cout << "\nSize of matrix= " << n << "\nElements of matrix:" << std::endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << Array[i][j] << " ";
		}
		std::cout << std::endl;
	}

	return;
}