#include<stdio.h>
void main()
{
	int x,y,i,j,n,a,b,c;
	scanf("%d",&n);
	for(i=0;i<=100;i++)
	{
		a=n-(2*i+1)*(2*i+1);
		if(a>=0) c=a;
		else c=-a;
		b=8*i-1;
		if((c<=b)||(c==0)) break;
	}
	if(c<=2*i)
	{
		x=i-c;
		y=-i;
	}		
	else if (c<=4*i)
	{
		x=-i;
		y=-i+(c-2*i);
	}
	else if (c<=6*i)
	{
		x=-i+(c-4*i);
		y=i;
	}
	else{
		x=i;
		y=i-(c-6*i);
	}
	printf("(%d,%d)\n",x,y);
		
		
}
	
	
