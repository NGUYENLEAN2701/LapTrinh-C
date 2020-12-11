#include <stdio.h>
#include <stdlib.h>
//#include <errno.h>

extern int errno;

int main()
{
    FILE *fptr;

    errno = 0;
    fptr = fopen("abctest.txt", "r");
    if (fptr == NULL)
    {
        fprintf(stderr, "Error opening file. Error code: %d\n", errno);
        exit(EXIT_FAILURE);
    }

    fclose(fptr);
    return 0;
}