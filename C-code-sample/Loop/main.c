#include <stdio.h>

int main()
{

    int n = 0;
    while (n < 5)
    {
        printf("hello %d\n", n);
        n++;
    }

    int count = 1;
    do
    {
        printf("Count = %d\n", count);
        count++;
    } while (count < 8);

    int i;
    int max = 10;

    for (i = 0; i < max; i++)
    {
        printf("%d\n", i);
    }
    int i2, j2;
    int table2 = 10;
    int max2 = 12;

    for (i2 = 1; i2 <= table2; i2++)
    {
        for (j2 = 0; j2 <= max2; j2++)
        {
            printf("%d x %d = %d\n", i2, j2, i2 * j2);
        }
        printf("\n"); /* blank line between tables */
    }
    return 0;
}