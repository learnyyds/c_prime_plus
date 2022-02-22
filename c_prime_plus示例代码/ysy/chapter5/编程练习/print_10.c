#include <stdio.h>
int main(void)
{
    printf("please input a num\n");
    int num;
    scanf("%d", &num);
    int flag = num + 10;
    while (num <= flag)
    {
        printf("%d ", num);
        num++;
    }
    return 0;
}