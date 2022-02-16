#include <stdio.h>
int main()
{
    float rate = 2.54;
    float cm;
    float inch;
    printf("please input the inch\n");
    scanf("%f", &inch);
    cm = inch * rate;
    printf("feet = %f cm", cm);
    return 0;
}