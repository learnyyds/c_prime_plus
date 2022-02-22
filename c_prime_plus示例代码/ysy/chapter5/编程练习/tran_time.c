#include <stdio.h>
#define HOUR_TO_MIN 60
int main(void)
{
    int min = 1;
    while (min > 0)
    {
        printf("please input second\n");
        scanf("%d", &min);
        printf("%d hours . %d min\n", min / HOUR_TO_MIN, min % HOUR_TO_MIN);
    }
    return 0;
}