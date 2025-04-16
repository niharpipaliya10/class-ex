#include <stdio.h>
void main()
{
    int num, i = 1;
    printf("Enter a number  :\n");
    scanf("%d", &num);
l1:
    printf("%d * %d = %d\n", num, i, num * i);
    i++;
    if (i <= 10)
    // if(++i<=10) is useable 
    // if(i++<=10) is not useable because it print 10 process increment and print 11 so.
        goto l1;
}