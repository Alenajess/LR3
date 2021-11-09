#include <math.h>

int findFirstElement(double eps)
{
	int i = 0;
	double a;

	for (i; ;i++)
	{
		a = pow(-1, i) * (double)((i - 1) / (2 * pow(i, 2) + 1));
		if (fabs(a) <= eps)
		{
			break;
		}
	}
	return ++i;
}