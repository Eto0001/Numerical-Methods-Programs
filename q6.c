#include <stdio.h>

int main()
{
    float x0, y0, x1, y1, x, y;

    printf("Enter first point (x0, y0): ");
    scanf("%f %f", &x0, &y0);

    printf("Enter second point (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter value of x to find y: ");
    scanf("%f", &x);

    y = y0 + ((x - x0) / (x1 - x0)) * (y1 - y0);

    printf("Interpolated value at x = %.2f is y = %.2f\n", x, y);

    return 0;
}

