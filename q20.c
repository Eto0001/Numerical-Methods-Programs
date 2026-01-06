#include<stdio.h>
#include<conio.h>
#define f(x,y) ((2*y)/x) //first derivative given
void main()
{
float x0,y0,h,x1,y1,x,i,m1,m2,res;
printf("Enter x0 and y0 value\n");
scanf("%f %f",&x0,&y0);
printf("Enter step-size\n");
scanf("%f",&h);
printf("Enter the value you want to find\n");
scanf("%f",&x);
for(i=x0+h;i<=x;i=i+h)
{
m1=f(x0,y0);
x1=x0+h;
y1=y0+h*m1;
m2=f(x1,y1);
res=y0+((m1+m2)/2) *h;
x0=x0+h;
y0=res;
}
printf("The result is:%f",res);
getch();
}
