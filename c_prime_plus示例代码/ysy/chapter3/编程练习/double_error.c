#include <stdio.h>
int main(void)
{
    //无符号能打印的最大的数
    unsigned int a = 0xffffffff;
    printf("%ud\n", a);
    //发生上溢
    printf("%ud\n", a + 1);

    float too_big = 2.9e100;
    //float无法储存，因此出现上溢
    printf("%f\n", too_big);
    too_big = 2.123456789;
    //超过float能保存的最大精度，出现下溢
    printf("%f\n", too_big);
    return 0;
}