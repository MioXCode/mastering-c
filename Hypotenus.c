#include <stdio.h>
#include <math.h>

int main()
{
    double A;
    double B;
    double C;

    printf("Enter a side A: ");
    scanf("%lf", &A);

    printf("Enter a side B: ");
    scanf("%lf", &B);

    C = sqrt(A * A + B * B);

    printf("Side C: %lf", C);

    return 0;
}
