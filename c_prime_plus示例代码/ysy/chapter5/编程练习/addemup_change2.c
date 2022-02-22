/* addemup.c -- five kinds of statements */
#include <stdio.h>
int main(void) /* finds sum of first 20 integers */
{
    int count, sum; /* declaration statement          */
    count = 0;      /* assignment statement           */
    sum = 0;        /* ditto                          */
    int flag;
    printf("please input days\n");
    scanf("%d", &flag);
    while (count++ < flag)         /* while                          */
        sum = sum + count * count; /*     statement                  */
    printf("sum = %d\n", sum);     /* function statement             */

    return 0; /* return statement               */
}
