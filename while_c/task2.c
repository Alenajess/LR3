#include <math.h>

double summ2(double eps)
{
	double sum = 0;
	int i = 0;
	double a;

	a =pow(-1, i) * (i - 1) / (2 * pow(i, 2) + 1);
	while (fabs(a) > eps)
	{
		a =pow(-1, i) * (i - 1) / (2 * pow(i, 2) + 1);
		sum += a;
		i++;
	}
	return sum;
}
