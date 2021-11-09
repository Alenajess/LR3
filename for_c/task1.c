#include <math.h>

double summ(int n)
{
	double sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += pow(-1, i) * (double)((i - 1) / (2 * pow(i, 2) + 1));
	}
	return sum;
}
