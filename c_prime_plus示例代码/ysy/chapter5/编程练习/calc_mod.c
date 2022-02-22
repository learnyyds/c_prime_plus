#include <stdio.h>

int main(void)
{
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    int mod2;
    scanf("%d", &mod2);
    printf("Now enter the first oprand:");
    int mod1;
    scanf("%d", &mod1);
    printf("%d %% %d is %d\n", mod1, mod2, mod1 % mod2);
    while (mod1)
    {
        printf("Enter next number for first operand (<= 0 to quit):");
        scanf("%d", &mod1);
        printf("%d %% %d is %d\n", mod1, mod2, mod1 % mod2);
    }
    printf("Done");
    return 0;
}