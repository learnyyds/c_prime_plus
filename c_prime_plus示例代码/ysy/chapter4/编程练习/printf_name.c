#include <stdio.h>
int main(void)
{
    printf("please input your name\n");
    char name[20] = {0};
    char temp[30] = {0};
    scanf("%s %s", name, temp);
    printf("%s,%s", name, temp);
    return 0;
}