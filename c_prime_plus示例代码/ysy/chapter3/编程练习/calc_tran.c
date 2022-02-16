#include <stdio.h>
int main()
{
    printf("please input pint\n");
    float pint;
    scanf("%f", &pint);
    printf("%f pint = %f cup = %f ounce = %f soupspoon = %f teaspoon\n", pint, pint * 2, pint * 2 * 8, pint * 2 * 8 * 2, pint * 2 * 8 * 2 * 3);
    return 0;
}