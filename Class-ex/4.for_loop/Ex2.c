#include <stdio.h>
void main()
{

    printf("hello\n");

    goto l1;
    printf("hai1\n");
    printf("hai2\n");
    printf("hai3\n");
l1:
    printf("bye\n");
}


output:
hello
bye