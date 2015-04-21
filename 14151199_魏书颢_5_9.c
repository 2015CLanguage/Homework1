#include"stdio.h"
int main()
{
	int n,i,s;
	for(n=2;n<1000;n=n+1)
	{   s=0;
		for(i=1;i<n;i=i+1)
		if(n%i==0) s=s+i;
		if(s==n) 
		{
			printf("%d,its factors are",n);
		
            for(i=1;i<n;i=i+1)
			if(n%i==0) printf("%d  ",i);
			printf("\n");
		}
	}
	return 0;
}

