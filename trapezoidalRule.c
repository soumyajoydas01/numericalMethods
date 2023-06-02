#include<stdio.h>
#include<math.h>

double f(double x){
	return (cos(x*x)+3*x*asin(1.0/3.0)+exp(pow(9.1*x+3,0.5)));
}

int main(){
	int n,i;
	double a,b,h, sum=0,var;
	
	printf("Enter the no of sub-intervals: ");
	scanf("%d",&n);
	printf("Enter the value of a: ");
	scanf("%lf",&a);
	printf("Enter the value of b: ");
	scanf("%lf",&b);
	
	h=(b-a)/n;
	
	sum=f(a)+f(b);
	
	for(i=1;i<n;i++){
		sum=sum+2*f(a+(i*h));
	}
	
	sum=0.5*h*(sum);
	
	printf("The value of the required integral is %.8lf\n",sum);
	
	return 0;
}
