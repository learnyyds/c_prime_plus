#include <stdio.h>

void calc_temp(double m);
int main(void)
{
    double temp = 1.0;
    while (1)
    {
        printf("please input a temp:");
        if (scanf("%lf", &temp) == 1)
        {
            calc_temp(temp);
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

void calc_temp(double m)
{
    double temp1 = 5.0 / 9.0 * (m - 32.0);
    double temp2 = temp1 + 273.16;
    printf("%f,%f,%f\n", m, temp1, temp2);
}