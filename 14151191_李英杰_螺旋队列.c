#include<stdio.h>
#include<math.h>
void main()
{
	int x,y,v,max,t,n;
	printf("输入坐标x,y\n");
	scanf("%d%d",&x,&y);
	if(abs(x)>abs(y))
		t=abs(x);
	else
		t=abs(y);
	max=(2*t+1)*(2*t+1);
	if(y==-t)
		n= max+(x+y);
	else if(x==-t)
        n= max+(3*x-y);
	else if(y==t)
        n= max+(-x-5*y);
	else if(x==t)
        n= max+(-7*x+y);
	printf("对应数为:%d\n",n);	
		
}
