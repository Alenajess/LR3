#include <math.h>

double summ2(double eps)
{
	double sum = 0;
	int i = 0;
	double a;

	a = pow(-1, i) * (double)((i - 1) / (2 * pow(i, 2) + 1));
	for (i = 0; fabs(a) > eps; i++)
	{
		a = pow(-1, i) * (double)((i - 1) / (2 * pow(i, 2) + 1));
		sum += a;

	}
	return sum;
}
