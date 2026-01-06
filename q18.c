#include<stdio.h>
#include<conio.h>
#define fd(x,y) (x*x+y*y) //first derivative
#define sd(x,y) (2*x+2*y*fd(x,y)) //second derivative
#define td(x,y) (2+2*y*sd(x,y)+2*(fd(x,y)*fd(x,y))) // third derivative
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
y1=y0+(h*fd(x0,y0))+(((h*h)*sd(x0,y0))/2)+ (((h*h*h)*td(x0,y0))/6);
x0=x0+h;
y0=y1;
}
printf("The result is:%f",y1);
getch();
}
