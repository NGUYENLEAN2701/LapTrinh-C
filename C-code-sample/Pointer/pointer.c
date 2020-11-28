#include <stdio.h>

void test(int k);

int main()
{
    // int i = 0;

    // printf("The address of i is %x\n", &i);
    // test(i);
    // printf("The address of i is %x\n", &i);
    // test(i);

    int j = 63;
    printf("The address of j is %x\n", &j);
    int *p = NULL;
    printf("p contains address %x\n", p);
    p = &j;

    printf("p contains address %x\n", p);
    printf("The value of j is %d\n", j);
    printf("p is pointing to the value %d\n", *p);

    return 0;
}

void test(int k)
{
    printf("The address of k is %x\n", &k);
}