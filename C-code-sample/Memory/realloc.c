#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = malloc(100 * sizeof(*ptr)); /* a block of 10 ints */
    if (ptr != NULL)
    {
        *(ptr + 3) = 100; /* assign 50 to third int */
        *(ptr + 50) = 50; /* assign 50 to third int */
    }
    ptr = realloc(ptr, 200 * sizeof(*ptr)); /* 100 ints */
    *(ptr + 150) = 75;
    printf("%d %d %d\n", *(ptr + 3), *(ptr + 50), *(ptr + 150));
    free(ptr);
    printf("%d %d %d\n", *(ptr + 3), *(ptr + 50), *(ptr + 150));
    return 0;
}