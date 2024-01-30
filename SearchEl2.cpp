#include "Library.h"

int SearchEl2(double* arr, int size)
{
	int g = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			g = i;
		}
	}

	return g;
}