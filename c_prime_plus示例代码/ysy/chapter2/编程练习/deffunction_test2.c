#include <stdio.h>

void br()
{
    printf("Brazil, Russia");
}

void ic()
{
    printf("India, China\n");
}
int main(void)
{
    br();
    printf(", ");
    ic();
    printf("India, China,\nBrazil, Russia");
    return 0;
}