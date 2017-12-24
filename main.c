#include <stdio.h>
#include <math.h>

int main() {

    double x, a, G, F, Y, T;
    int K;

    printf("Формула №1 G = (5*(-2*pow(a,2) + a*x + 3*pow(x,2))/(10*pow(a,2) + 11*a*x + 3*pow(x,2)))\n");
    printf("Формула №2 F = sin(10*pow(a,2) - 7*a*x + pow(x,2))\n");
    printf("Формула №3 Y = atan(45*pow(a,2) + 79*a*x + 30*pow(x,2))\n");
    printf("Выберите формулу для решения:");
    scanf("%d", &K);
    printf("Введите значение x:");
    scanf("%lf", &x);
    printf("Введите значение a:");
    scanf("%lf", &a);

    switch (K) {
        case 1:
            T = (10 * pow(a, 2) + 11 * a * x + 3 * pow(x, 2));
            if (fabs(T)<(10e-6)){
                printf("Введите другие значения");
                break;
            }
            G = (5 * (-2 * pow(a, 2) + a * x + 3 * pow(x, 2))/T);
            printf("G=%lf\n", G);
            break;
        case 2:
            F = sin(10 * pow(a, 2) - 7 * a * x + pow(x ,2));
            printf("F=%lf\n", F);
            break;
        case 3:
            Y = atan(45 * pow(a, 2) + 79 * a * x + 30 * pow(x, 2));
            printf("Y=%lf\n", Y);
            break;
    }
    return 0;
}