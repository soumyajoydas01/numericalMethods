#include<stdio.h>
#include<math.h>

double f(double x){
	return ((1/tan(x*x))+3*x*acos(1.0/3.0)+exp(pow(9.1*x+3,0.5)));
}

int main(){
	int n,i;
	double a,b,h,x,sum=0.0,var;
	printf("Enter the number of sub-intervals: ");
	scanf("%d",&n);
	printf("Enter the value of a: ");
	scanf("%lf",&a);
	printf("Enter the value of b: ");
	scanf("%lf",&b);
	
	if(n%2!=0){
		printf("The number of sub-intervals must be even");
	}else{
		h=(b-a)/n;
		for(i=1;i<n;i++){
			x=a+i*h;
			if(i%2==0){
				sum=sum+2.0*f(x);
			}else{
				sum=sum+4.0*f(x);
			}
		}
		
		var=(h/3)*(f(a)+f(b)+sum);
		printf("The value of the integral is %.8lf\n",var);
	}
	
	return 0;
	
}
