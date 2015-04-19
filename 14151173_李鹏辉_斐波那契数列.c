#include<stdio.h>
void main()
{
	int i,n,f[20];
	f[0]=1;
	f[1]=1;
	for(i=2;i<=20;i++)
		f[i]=f[i-1]+f[i-2];
	printf("请输入一个整数n(不大于20):\n");
	scanf("%d",&n);
	printf("斐波那契数列的第%d项是：%d\n",n,f[n-1]);
}
