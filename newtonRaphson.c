#include<stdio.h>
#include<math.h>

float f(float x){
	return cos(x)*sin(3*x)-3*x+log2(4);
}

float df(float x){
	return 3*cos(x)*cos(3*x)-sin(3*x)*sin(x)-3;
}

int main()
{
	float x,x0,k=0.000005,diff;
	printf("Initial approximation: ");
	scanf("%f",&x0);
	
	diff=f(x0)/df(x0);
	
	while(fabs(diff)>=k){
		x=x0-f(x0)/df(x0);
		diff=x-x0;
		x0=x;
	}
	
	printf("A root of the equation is %.5f",x);
	
	return 0;
}
