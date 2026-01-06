#include<stdio.h>
#include<conio.h>
void main(){
	float a,b,n,x[10],y[10],sumxy=0,sumx=0,sumy=0,sumx2=0;
	int i;
	printf("Enter no of points\n");
	scanf("%f", &n);
	printf("enter data points\n");
	for(i=1;i<=n;i++)
	{
		scanf("%f %f", &x[i], &y[i]);
	}
	for(i=1;i<=n;i++)
	{
		sumxy = sumxy+x[i]*y[i];
		sumx=sumx+x[i];
		sumy=sumy+y[i];
		sumx2=sumx2+x[i]*x[i];
	}
	b=((n*sumxy)-(sumx*sumy))/((n*sumx2)-(sumx*sumx));
	a=(sumy/n) - (b*sumx)/n;
	printf("y=%f + %fx",a,b);
	getch();
}
