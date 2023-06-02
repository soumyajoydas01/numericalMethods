#include<stdio.h>
#include<math.h>

float f(float x,float y){
	return (5.0*x*x + sin(pow(x,2) + y/10.0 + 5.0/18.0))/sqrt(4.0*x*x + 5*y + 3);
}

int main(){
	int i,n;
	float x[100],y[100],h,k1,k2,k3,k4,xn;
	printf("\nEnter the value of x[0],y[0],h,xn\n");
	scanf("%f %f %f %f",&x[0],&y[0],&h,&xn);
	i=0;
	do{
		x[i+1]=x[i]+h;
		k1=h*f(x[i],y[i]);
		k2=h*f(x[i]+h/2,y[i]+k1/2);
		k3=h*f(x[i]+h/2,y[i]+k2/2);
		k4=h*f(x[i]+h,y[i]+k3);
		y[i+1]=y[i]+(k1+2*k2+2*k3+k4)/6;
		printf("Value of y=%f at x=%f\n",y[i+1],x[i+1]);
		i++;
	}while(x[i]<=xn);
	
	return 0;
}
