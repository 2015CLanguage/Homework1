#include <stdio.h>
int main(){
	int m,a,b,c,d,e;
	char f[4];
	scanf("%d",&m);
	a=m/1000;
	b=m%1000/100;
	c=m%100/10;
	d=m%10;
    a=(a+5)%10;
	b=(b+5)%10;
	c=(c+5)%10;
	d=(d+5)%10;
	a+=65;
	b+=65;
	c+=65;
	d+=65;
	a=(char)a;
	b=(char)b;
	c=(char)c;
	d=(char)d;
	f[0]=d;
	f[1]=c;
	f[2]=b;
	f[3]=a;
	puts(f);
	return 0;
}
