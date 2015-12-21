#include "header.h"

void	cpu_easy(int *array, int *number)
{
	int choice;

	if (*(array + (*number - 1)) == 1)
	{
		*(array + (*number - 1)) = 0;
		(*number)--;
	}
	else if (*(array + (*number - 1)) == 2)
		*(array + (*number - 1)) -= 1;
	else if (*(array + (*number - 1)) == 3)
		*(array + (*number - 1)) -= 2;
	else if (*(array + (*number - 1)) == 4)
		*(array + (*number - 1)) -= 3;
	else
		*(array + (*number - 1)) -= *(array + (*number - 1)) % 2 + 1;
}
