#include <stdio.h>
int main()
{
    printf("please input a float code\n");
    float a;
    scanf("%f", &a);
    printf("fixed-point notation : %f\n", a);
    printf("exponential notation: %e\n", a);
    printf("p notation: %aln", a);

    return 0;
}