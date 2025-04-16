// wap to print binary reverse of given number.
#include <stdio.h>
void main()
{

    int num, pos;
    printf("Enter a number :\n");
    scanf("%d", &num);

    for (pos = 0; pos <= 31; pos++)
    {
        printf("%d", num >> pos & 1);
        if (pos % 4 == 0)
        {
            printf(" ");
        }
    }
}