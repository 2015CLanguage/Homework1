#include<stdio.h>
int main()
{int a,b,c,d,e;
 printf("请输入一个四位的正整数:\n");
 scanf("%d",&e);
 a=(e-e%1000)/1000;
 b=(e%1000-e%100)/100;
 c=(e%100-e%10)/10;
 d=e%10;
 a=(a+5)%10+65;
 b=(b+5)%10+65;
 c=(c+5)%10+65;
 d=(d+5)%10+65;
 printf("加密结果为:\n");
 putchar(d);
 putchar(c);
 putchar(b);
 putchar(a);
 putchar('\n');
 return 0;
 } 
