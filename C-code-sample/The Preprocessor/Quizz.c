#include <stdio.h>
#define sqr(x) x *x

int main()
{
    int x = 16 / sqr(4);
    printf("%d", x);
    return 0;
}