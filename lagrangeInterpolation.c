#include<stdio.h>
#include<math.h>

int main(){
	int n,i,j;
	float x[100],y[100],a,sum=0,prod=1;
	printf("Enter the number of terms of the table: ");
	scanf("%d",&n);
	printf("\nEnter the respective values of x and y:\n\n");
	for(i=0;i<n;i++){
		scanf("%f %f",&x[i],&y[i]);
	}
	printf("\n\nThe table entered is as folows:\n\n");
	for(i=0;i<n;i++){
		printf("%f\t%f",x[i],y[i]);
		printf("\n");
	}
	{
		printf("nEnter the value of the x to find the respective value of y\n");
		scanf("%f",&a);
		for(i=0;i<n;i++){
			prod=1;
				for(j=0;j<n;j++){
					if(j!=i){
						prod=prod*(a-x[j])/(x[i]-x[j]);
					}
				}
				sum=sum+(prod*y[i]);
			}
		printf("\n\nValue of y at x=%f is: %f",a,sum);
	}
	
		return 0;
}
