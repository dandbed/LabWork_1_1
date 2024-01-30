#include "Library.h"

double* create_of_new_arr(double* arr, int size, int new_size)
{
	int j = 0;
	double* TempArr = new double[new_size];

	for (int i = 0; i < size; i++)
	{
		if (abs(arr[i]) >= 1)
		{
			if (j < new_size)
			{
				*(TempArr + j) = arr[i];
				j++;
			}
		}
	}

	return TempArr;
}