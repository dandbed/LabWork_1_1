#include "Library.h"

int SearchEl1(double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			return i;
		}
	}
}