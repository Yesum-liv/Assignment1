#include <stdio.h>
#include <conio.h>

void main()
{
    float R1, R2, Rt, Parallel, Series;
    printf("Enter the value of first resistance:");
    scanf("%f", &R1);
    printf("Enter the value of second resistance:");
    scanf("%f", &R2);
    Series = R1 + R2;
    Parallel = (R1 * R2) / (R1 + R2);
    printf("The value of equilavent resistance in series is %f", Series);
    printf("The value of equilavent resistance in parallel is %f", Parallel);

    getch();
}