#include<stdio.h>
#include<conio.h>
void main(){
	float x[10], y[10],sum=0,x1,p,n ;
	int i,j;
	printf("enter no of data points\n");
	scanf("%f", &n);
	printf("enter point at which you want to calculate interpolation\n");
	scanf("%f", &x1);
	for(i=1;i<=n;i++)
	{
		scanf("%f %f", &x[i], &y[i]);
	}
	for(i=1;i<=n;i++)
	{
		p=1;
		for(j=1;j<=n;j++)
		{
			if(j!=i){
				p=p*(x1-x[j])/(x[i]-x[j]);
			}
		}
			sum=sum+y[i]*p;
	}
		printf("The result is: %f", sum);
		getch();
}

