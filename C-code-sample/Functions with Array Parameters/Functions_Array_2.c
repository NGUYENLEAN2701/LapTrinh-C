#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random(int minN, int maxN)
{
    return minN + rand() % (maxN + 1 - minN);
}
void quicksort(int number[25], int first, int last)
{
    int i, j, pivot, temp;

    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;

        while (i < j)
        {
            while (number[i] <= number[pivot] && i < last)
                i++;
            while (number[j] > number[pivot])
                j--;
            if (i < j)
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }

        temp = number[pivot];
        number[pivot] = number[j];
        number[j] = temp;
        quicksort(number, first, j - 1);
        quicksort(number, j + 1, last);
    }
}

int main()
{
    srand((int)time(0));
    int i, number[100];

    for (i = 0; i < 100; i++)
        number[i] = random(0, 99);

    printf("elements: \n");
    for (i = 0; i < 100; i++)
        if (i % 10 == 0 && i != 0)
            printf("%d \n", number[i]);
        else
            printf("%d ", number[i]);

    quicksort(number, 0, 99);

    printf("\n\nOrder of Sorted elements: \n");
    for (i = 0; i < 100; i++)
        if (i % 10 == 0 && i != 0)
            printf("%d \n", number[i]);
        else
            printf("%d ", number[i]);

    return 0;
}