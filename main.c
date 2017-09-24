#include <stdio.h>
#include <math.h>

int main() {

    double x, a, G, F, Y;
    int K;

    printf("Формула №1 G = (-10*(18*pow(a,2)+11*a*x-24*pow(x,2)))/(-pow(a,2)+a*x+6*pow(x,2))\n");
    printf("Формула №2 F = cosh(21*pow(a,2)-34*a*x+9*pow(x,2))\n");
    printf("Формула №3 Y = log(3*pow(a,2)-25*a*x+8*pow(x,2)+1)/log(10)\n");
    printf("Выберите формулу для решения:");
    scanf("%d", &K);
    printf("Введите значение x:");
    scanf("%lf", &x);
    printf("Введите значение a:");
    scanf("%lf", &a);

    switch (K) {
        case 1:
            G = (-10 * (18 * pow(a, 2) + 11 * a * x - 24 * pow(x, 2))) / (-pow(a, 2) + a * x + 6 * pow(x, 2));
            printf("G=%lf\n", G);
            break;
        case 2:
            F = cosh(21 * pow(a, 2) - 34 * a * x + 9 * pow(x, 2));
            printf("F=%lf\n", F);
            break;
        case 3:
            if (x > 0)
                printf("Введите отрицательное число ");
                printf("x:");
                scanf("%lf",&x);
                Y = log(3 * pow(a, 2) - 25 * a * x + 8 * pow(x, 2) + 1) / log(10);
                printf("Y=%lf\n", Y);
                break;
        }
    return 0;
}
