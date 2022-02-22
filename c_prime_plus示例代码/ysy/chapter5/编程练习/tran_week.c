#include <stdio.h>
#define WEEK 7
int main(void)
{
    int days = 1;
    while (days > 0)
    {
        printf("please input days\n");
        scanf("%d", &days);
        printf("%d days are %d weeks, %d days.\n", days, days / WEEK, days % WEEK);
    }
    return 0;
}