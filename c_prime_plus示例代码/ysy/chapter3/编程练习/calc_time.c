#include <stdio.h>
int main()
{
    float T = 3.156e7;
    printf("please input a years\n");
    int years;
    scanf("%d", &years);
    printf("%d years = %f", years, T * years);
}