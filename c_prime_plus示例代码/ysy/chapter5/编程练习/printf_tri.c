#include <stdio.h>

double calc_tri(double m);
int main(void)
{
    printf("please input a double num\n");
    double m;
    scanf("%lf", &m);
    m = calc_tri(m);
    printf("%f\n", m);
    return 0;
}

double calc_tri(double m)
{
    m = m * m * m;
    return m;
}