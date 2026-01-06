#include<stdio.h>
#include<math.h>
#define E 0.0001
#define f(x) (x*x-4*x-10)
#include<conio.h>
void main()
{
float x1,x2,x3,f2,f1;
printf("Enter two guess value\n");
scanf("%f %f",&x1,&x2);
up:
f1=f(x1);f2=f(x2);
x3=x2-(f2*(x2-x1))/(f2-f1);
if(fabs((x3-x2)/x3)<=E)
{
printf("The root is: %f",x3);
}
else
{
x1=x2;
x2=x3;
goto up;
}
getch();
}
