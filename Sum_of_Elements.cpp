#include "Library.h"

int Sum_Of_Elements(int j, int i, int** Array, int n)
{
	int Sum = 0;

	while ((j < n) && (i < n))
	{
		Sum += Array[i][j];
		j++;
		i++;
	}

	return Sum;
}
