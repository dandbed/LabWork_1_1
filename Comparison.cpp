#include "Library.h"

int Comparison(int MaxSum, int MaxSumIntermediate)
{
	if (MaxSumIntermediate > MaxSum)
	{
		return MaxSumIntermediate;
	}

	else
	{
		return MaxSum;
	}
}