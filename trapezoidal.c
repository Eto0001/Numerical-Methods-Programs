#include<stdio.h>
#include<math.h>
#include<conio.h>
#define f(x) (exp(x))
void main()
{
	float a,b,y0,yn,s=0,I,h,i,n;
	printf("Enter lower and upper limit\n");
	scanf("%f %f", &a,&b);
	printf("enter the no of segements\n");
	scanf("%f", &n);
	h=(b-a)/n;
	y0=f(a);
	yn=f(b);
	for(i=a+h;i<b;i=i+h)
	{
		s=s+f(i);
	}
	I=0.5*h*(y0+yn+2*s);
	printf("The result is: %f",I);
	getch();
}

