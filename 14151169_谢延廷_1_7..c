#include <stdio.h>
#include <math.h>

int main()

{
float r;
float h;
scanf("r=%f,h=%f",&r,&h);
float pi=3.1415926;
float a=2*pi*r;
float b=pi*r*r;
float c=4*pi*r*r;
float d=4/3*pi*r*r*r;
float e=a*h;

printf("圆的周长为=%7.2f\n  圆面积为=%7.2f\n  圆球表面积=%7.2f\n  圆球体积=%7.2f\n  圆柱体积=%7.2f\n",a,b,c,d,e);




}
