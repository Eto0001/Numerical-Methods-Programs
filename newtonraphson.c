#include <stdio.h>
#include <math.h>
#define f(x) ((x)*(x)-(x)-2)
#define g(x) (2*(x)-1)
#define E 0.001

int main() {
    float x0, x1, f0, g0;

    printf("Enter an initial guess value: ");
    scanf("%f", &x0);

    do {
        f0 = f(x0);
        g0 = g(x0);
        x1 = x0 - (f0 / g0);

        if (fabs((x1 - x0) / x1) <= E) {
            printf("The root is: %f\n", x1);
            break;
        }

        x0 = x1;
    } while (1);

    return 0;
}
