#include<stdio.h>
#include<math.h>

int main(){
	int i,j,k,n,count=0;
	float a[20][20],x[20],y[20],eps=0.00001,diff;
	
	printf("Enter the no of equations: ");
	scanf("%d",&n);
	
	printf("\nEnter the elements of the augmented matrix: \n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n+1;j++){
			scanf("%f",&a[i][j]);
		}
	}
	
	printf("The augmented matrix is given as:\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n+1;j++){
			printf("\t%f",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=1;i<=n;i++){
		x[i]=0;
	}
	
	do{
		count++;
		printf("\nIteration %d\n",count);
		
		diff=0;
		for(i=1;i<=n;i++){
			y[i]=a[i][n+1];
			for(j=1;j<=n;j++){
				if(j!=i){
					y[i]=y[i]-a[i][j]*x[j];
				}
			}
			y[i]=y[i]/a[i][i];
			diff=diff+fabs(x[i]-y[i]);
			x[i]=y[i];
			printf("x[%d]=%f\t",i,x[i]);
		}
		printf("\n");
	}while(diff>eps);
	
	return 0;
}
