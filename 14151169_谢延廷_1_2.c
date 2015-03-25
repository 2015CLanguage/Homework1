#include <stdio.h>
#include <math.h>


int main()


 {
	float a=1000*(1+5*0.0585);
	printf("P1=%f\n",a);
	
	float b=1000*(1+2*0.0468);
    float c=b*(1+3*0.054);
    printf("P2=%f\n",c);
    
    float d=1000*(1+3*0.054);
    float e=d*(1+2*0.0468);
    printf("P3=%f\n",e);

	float f=1000*(1+0.0414)*(1+0.0414)*(1+0.0414)*(1+0.0414)*(1+0.0414);
	printf("P4=%f\n",f);
    
	
    float g=(1+0.0072/4);

	float h=pow(g,20);
	float i=1000*h;
	printf("P5=%f\n",i);

	return 0;
}
