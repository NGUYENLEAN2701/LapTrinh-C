#include <stdio.h>
#include <string.h>
#define STR(x) #x
#define STRLEN(x) strlen(x)

int main()
{

    printf("%d", STRLEN(STR(12345)));

    return 0;
}