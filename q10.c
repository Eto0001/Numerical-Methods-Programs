#include <stdio.h>
#include <math.h>

/* Define the function */
float f(float x)
{
    return (x*x*x + x*x + x + 1);
}

int main()
{
    float x, h, first, second;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter the value of h (small increment): ");
    scanf("%f", &h);

    first = (f(x + h) - f(x - h)) / (2 * h);
    second = (f(x + h) - 2 * f(x) + f(x - h)) / (h * h);

    printf("\nFirst derivative at x = %.3f is %.3f", x, first);
    printf("\nSecond derivative at x = %.3f is %.3f\n", x, second);

    return 0;
}


