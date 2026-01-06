#include <stdio.h>
#include <math.h>

#define f(x) (cos(x) - x)
#define df(x) (-sin(x) - 1)

int main()
{
    float x0, x1, e;
    int itr = 0;

    printf("Enter initial guess: ");
    scanf("%f", &x0);

    printf("Enter allowed error: ");
    scanf("%f", &e);

    do
    {
        x1 = x0 - f(x0) / df(x0);
        x0 = x1;
        itr++;
    } while (fabs(f(x1)) > e);

    printf("\nRoot of the equation is: %.4f", x1);
    printf("\nNumber of iterations: %d\n", itr);

    return 0;
}

