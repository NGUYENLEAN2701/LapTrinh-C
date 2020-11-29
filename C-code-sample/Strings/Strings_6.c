#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char input[10];
    int num;

    printf("Enter a number: ");
    gets(input);
    num = atoi(input);
    /*  atoi -> int
        atol -> long
        atof -> float
    */
    printf("%d", num);

    char *trip[] = {
        "suitcase",
        "passport",
        "ticket"};

    printf("Please bring the following:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", trip[i]);
    }
    return 0;
}
