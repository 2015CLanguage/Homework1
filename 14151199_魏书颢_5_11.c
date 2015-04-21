#include"stdio.h"
int main()
{
	double s,h;
	s=100;
	h=50;
	int i;
	for(i=2;i<=10;i=i+1)
	{
		s=s+2*h;
		h=h/2;
	}
	printf("第十次反弹时共经过%f米\n",s);
	printf("第十次反弹的高度为%f米\n",h);
	return 0;
}
