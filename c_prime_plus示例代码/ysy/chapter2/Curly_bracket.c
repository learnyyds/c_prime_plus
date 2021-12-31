#include <stdio.h>
int main(void)
{
    {
        int a = 10;
        printf("%d\n", a);
    }
    //printf("%d\n", a);   //不注释此处就会导致错误，因为变量a在函数体内未定义
    return 0;
}