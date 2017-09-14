#include <stdio.h>
#include <math.h>

int main() {
    double x, a, G, F, Y;
    printf("Введите x:");
    scanf("%lf", &x);
    printf("Введите a:");
    scanf("%lf", &a);
    G = (5*(-2*pow(a,2) + a*x + 3*pow(x,2))/(10*pow(a,2) + 11*a*x + 3*pow(x,2)));
    printf("G=%f\n\n", G);

    printf("Введите x:");
    scanf("%lf", &x);
    printf("Введите a:");
    scanf("%lf", &a);
    F = sin(10*pow(a,2) - 7*a*x + pow(x,2));
    printf ("F=%f\n\n", F);

    printf("Введите x:");
    scanf("%lf", &x);
    printf("Введите a:");
    scanf("%lf", &a);
    Y = atan(45*pow(a,2) + 79*a*x + 30*pow(x,2));
    printf("Y=%f\n\n", Y);

    return 0;
}