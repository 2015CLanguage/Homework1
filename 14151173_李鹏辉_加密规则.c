#include <stdio.h>
void main()
{
	int a,b,c,d,n,temp;
	char m[4];
	scanf("%d",&n);     //输入一个四位数
//依次得到每位数字
	a=n/1000;
	b=(n-a*1000)/100;
	c=(n-a*1000-b*100)/10;
	d=n-a*1000-b*100-c*10;
//加密规则
	a=(a+5)%10;
	b=(b+5)%10;
	c=(c+5)%10;
	d=(d+5)%10;
	temp=a;
	a=d;
	d=temp;
	temp=b;
	b=c;
	c=temp;         //交换位置
	a+=65;
	b+=65;
	c+=65;
	d+=65;         
	(char) a;
	(char) b;
	(char) c;
	(char) d;      //各位数字对应到大写字母，对应规则：0-9对应A-J
	m[0]=a;
	m[1]=b;
	m[2]=c;
	m[3]=d;
	puts("对应的密码是:");
	puts(m);         //用puts函数输出结果
}

 
