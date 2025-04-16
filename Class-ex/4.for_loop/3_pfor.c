#include <stdio.h>
void main()
{

    unsigned int num, m, i, j, n;
    int pos;
    printf("Enter a number:\n");
    scanf("%d", &num);

    for (pos = 31; pos >= 0; pos--)
    {

        printf("%d", num >> pos & 1);
        if (pos % 4 == 0)
        {
            printf(" ");
        }
    }
    printf("\nnum=%d\n", num);

    for (i = 0, j = 31; i < 8; i++, j--)
    {
        m = num >> i & 1;
        n = num >> j & 1;

        if (m != n)
        {
            num = num ^ 1 << i;
            num = num ^ 1 << j;
        }
    }

    printf("After :\n");
    for (pos = 31; pos >= 0; pos--)
    {

        printf("%d", num >> pos & 1);
        if (pos % 4 == 0)
        {
            printf(" ");
        }
    }
    printf("\n num=%u", num);
}