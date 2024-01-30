#include "Library.h"

double sum(int size, double* arr)
{
	double sume = 0;
	int i = 1;

	while (i < size)
	{
		sume = sume + arr[i];
		i += 2;
	}

	return sume;
}