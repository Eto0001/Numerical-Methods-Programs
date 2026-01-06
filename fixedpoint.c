#include <stdio.h>
#include <math.h>

#define g(x) (2 - (x)*(x))  // Rearranged function
#define E 0.001             // Tolerance

int main() {
    float x0, x1;

    printf("Enter an initial guess value: ");
    scanf("%f", &x0);

    while (1) {
        x1 = g(x0);

        if (fabs((x1 - x0) / x1) <= E) {
            printf("The root is: %f\n", x1);
            break;
        }

        x0 = x1;
    }

    return 0;
}
