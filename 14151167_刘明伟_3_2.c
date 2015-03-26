Enter file contents here
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
int main()
{
	double d, p, r, m;
	d = 300000;
	p = 6000;
	r = 0.01;
	m = log10(p / (p - d*r)) / log10(1 + r);
	printf("m=%.1f\n", m);
	system("pause");
	return 0;
}
