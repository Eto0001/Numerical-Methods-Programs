#include<stdio.h>
#include<conio.h>
#define f(x,y) (x*x+y*y) //first derivative given
void main()
{
float x0,y0,h,x,i,m1,m2,m3,m4,res,k,l,m,n,p;
printf("Enter x0 and y0 value\n");
scanf("%f %f",&x0,&y0);
printf("Enter step-size\n");
scanf("%f",&h);
printf("Enter the value you want to find\n");
scanf("%f",&x);
for(i=x0+h;i<=x;i=i+h)
{
m1=f(x0,y0);
k=x0+(h/2);
l=y0+((m1*h)/2);
m2=f(k,l);
m=y0+((m2*h)/2);
m3=f(k,m);
n=x0+h;
p=y0+m3*h;
m4=f(n,p);
res=y0+((m1+2*m2+2*m3+m4)/6) *h;
x0=x0+h;
y0=res;
}
printf("The result is:%f",res);
getch();
}
