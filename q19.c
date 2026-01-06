#include<stdio.h>
#include<conio.h>
#define f(x,y) (3*x*x+1) //first derivative given
void main()
{
float x0,y0,h,y1,x,i;
printf("Enter x0 and y0 value\n");
scanf("%f %f",&x0,&y0);
printf("Enter step-size\n");
scanf("%f",&h);
printf("Enter the value you want to find\n");
scanf("%f",&x);
for(i=x0+h;i<=x;i=i+h)
{
y1=y0+h*f(x0,y0);
x0=x0+h;
y0=y1;
}
printf("The result is:%f",y1);
getch();
}
