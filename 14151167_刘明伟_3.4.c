Enter file contents here
# include <stdio.h>
# include <stdlib.h>
int main()
{
float r, h, c, s, S, V,v, pi;
printf("请输入半径r与h:\n");
scanf_s("%f%f", &r, &h);
pi = 3.1416;
c = 2 * pi*r;
s = pi*r*r;
S = 4 * pi*r*r;
V = 4/3*r*r*r;
v = pi*r*r*h;
printf("圆的周长c:%.2f\n",c);
printf("圆的面积s:%.2f\n",s);
printf("球的表面积S:%.2f\n",S);
printf("球的体积V:%.2f\n",V);
printf("圆柱的体积v:%.2f\n", v);
system("pause");
return 0;
}
