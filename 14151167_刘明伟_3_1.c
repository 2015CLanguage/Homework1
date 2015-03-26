Enter file contents here
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
int main()
{
	int p = 1000;
	double a, b, c, d, e, A, B, C, D, E;
	a = 4.14 / 100;
	b = 4.68 / 100;
	c = 5.4 / 100;
	d = 5.85 / 100;
	e = 0.72 / 100;
	A= p*(1 + 5 * d);
	B = p*(1 + 2 * b)*(1 + 3 * c);
	C = p*(1 + 3 * c)*(1 + 2 * b);
	D = pow((1 + a), 5)*p;
	E = pow((1 + e / 4), 20)*p;
	printf("%.1f,%.1f,%.1f,%.1f,%.1f,", A, B, C, D, E);
	system("pause");
	return 0;
}
