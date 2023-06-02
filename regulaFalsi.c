#include<stdio.h>
#include<math.h>

float f(float x){
	return (x*x*x)-(3*x)-1;
}

int main(){
	float a,b,eps=0.000001,c,k=0,diff;
	printf("Enter the value of a: ");
	scanf("%f",&a);
	printf("Enter the value of b: ");
	scanf("%f",&b);
	
	if(f(a)*f(b)>0){
		printf("Error: f(a) and f(b) do not have opposite signs\n");
		return 0;
	}
	
	do{
		c=(a*f(b)-b*f(a))/(f(b)-f(a));
		diff=fabs(k-c);
			k=c;
		if(f(a)*f(c)<0){
			b=c;
		}else{
			a=c;
		}
	}while(diff>=eps);
	
	printf("A root of the equation is %.5f\n",c);
	return 0;
}
