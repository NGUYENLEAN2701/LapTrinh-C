#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Print_Array(int Array[], int Array_Length);
int random(int minN, int maxN);
int main()
{
    srand((int)time(0));
    int A[10];
    for (int i = 0; i < 10; i++)
    {
        A[i] = random(0, 99);
        //printf("%d\n", A[i]);
    }

    Print_Array(A, (int)(sizeof(A) / sizeof(A[0])));
    return 0;
}

void Print_Array(int Array[], int Array_Length)
{
    for (int i = 0; i < Array_Length; i++)
    {
        printf("Array[%d] = %d\n", i, Array[i]);
    }
}

int random(int minN, int maxN)
{
    return minN + rand() % (maxN + 1 - minN);
}