#include <stdio.h>
int main(int argc, char **argv)
{
    int inch;
    printf("please input inch value\n");
    scanf("%d", &inch);
    printf("%d inch = %.2f cm", inch, 2.54 * inch);
    return 0;
}
