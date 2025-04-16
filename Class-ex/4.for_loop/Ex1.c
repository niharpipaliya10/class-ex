#include <stdio.h>
void main()
{
    printf("hello\n");
l1:
    printf("hai\n");
    sleep(5);
    goto l1;
    printf("by\n");
}