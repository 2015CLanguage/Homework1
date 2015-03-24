#include<stdio.h>
int main()
{
    int a,p1,p2,p3,p4,t14,t23;
	scanf("%d",&a);
	p1=a/1000;
	p2=(a-p1*1000)/100;
    p3=(a-p1*1000-p2*100)/10;
	p4=(a-p1*1000-p2*100-p3*10);
    printf("%d %d %d %d\n",p1,p2,p3,p4);
	p1=(p1+5)%10;
    p2=(p2+5)%10;
    p3=(p3+5)%10;
    p4=(p4+5)%10;
	t14=p1;
	p1=p4;
	p4=t14;
	t23=p2;
	p2=p3;
	p3=t23;
	p1+=65;
	p2+=65;
	p3+=65;
	p4+=65;
	printf("%c%c%c%c\n",p1,p2,p3,p4);
	return 0;
}
