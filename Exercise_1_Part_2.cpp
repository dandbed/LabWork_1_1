#include "Library.h"
#include "Prototypes.h"

void Exercise_1_Part_2(int** Array, int n)
{
	if (n >= 2)
	{
		int* ResultMul = new int[n];

		std::cout << "Initial matrix:" << std::endl;

		DisplayPart_2(Array, n);
		Initialization_Of_Result_Martix(ResultMul, n);

		std::cout << "Result of work of the program:" << std::endl;

		for (int i = 0; i < n; i++)
		{
			int count = 0;

			count = Count_Negative_Elements(Array, ResultMul, n, i);

			if (count != n)
			{
				std::cout << "Line " << i << " :" << ResultMul[i] << std::endl;
			}

			else
			{
				std::cout << "There are no negative elements in the line '" << i << "'." << std::endl;
			}
		}

		delete[] ResultMul;
	}

	else
	{
		std::cout << "The size of matrix isn't correct for work with this exercise." << std::endl;
	}

	return;
}