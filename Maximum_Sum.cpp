#include "Library.h"
#include "Prototypes.h"

int Maximum_Sum(int** Array, int n)
{
	int MaxSum = INT16_MIN;
	int MaxSumIntermediate = 0;
	int i = 0, j = 0;

	for (int f = 1; f < n - 1; f++)
	{
		i = 0;
		j = f;
		MaxSumIntermediate = 0;

		MaxSumIntermediate = Sum_Of_Elements(j, i, Array, n);
		MaxSum = Comparison(MaxSum, MaxSumIntermediate);
	}

	for (int f = 1; f < n - 1; f++)
	{
		i = f;
		j = 0;
		MaxSumIntermediate = 0;

		MaxSumIntermediate = Sum_Of_Elements(j, i, Array, n);
		MaxSum = Comparison(MaxSum, MaxSumIntermediate);
	}

	return MaxSum;
}