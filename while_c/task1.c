#include <math.h>

double summ(int n)
{
	double sum = 0;
	int i = 0;

	while (i < n)
	{
		sum += pow(-1, i) * (i - 1) / (2 * pow(i, 2) + 1);
		++i;
	}

	return sum;
}
