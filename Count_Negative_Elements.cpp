#include "Library.h"

int Count_Negative_Elements(int** Array, int* ResultMul, int n, int i)
{
	int count = 0;

	for (int j = 0; j < n; j++)
	{
		ResultMul[i] *= Array[i][j];

		if (Array[i][j] >= 0)
		{
			count++;
		}
	}

	return count;
}