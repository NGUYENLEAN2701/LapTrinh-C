#include <stdio.h>

#define CONCAT(x, y) x##y

int main()
{
    int x = 4;
    int y = 5;
    int CONCAT(x, y) = x + y;
    printf("%d", xy);

    return 0;
}