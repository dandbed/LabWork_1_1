#include "Library.h"
#include "Prototypes.h"

void task_1(int size, double* arr)
{
	int Quant = 0;
	double Sum = 0;
	int i = 1;

	if (size < 4)
	{
		cout << "Not enough elements in array" << endl;
	}

	else
	{
		Sum = sum(size, arr);
		Quant = quantity(size, arr);

		cout << "Sum= " << Sum << endl;
		cout << "quantity = " << Quant << endl;

		while (i < size)
		{
			cout << "odd index " << i << endl;
			i += 2;
		}
	}

	return;
}