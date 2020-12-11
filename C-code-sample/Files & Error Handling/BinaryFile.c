#include <stdio.h>

int main()
{
    FILE *fptr;
    int arr[100];
    int x[10];
    int k;

    /* generate array of numbers */
    for (k = 0; k < 100; k += 1)
        arr[k] = k * 3;

    /* write array to file */
    fptr = fopen("datafile.bin", "wb");
    fwrite(arr, sizeof(arr[0]), sizeof(arr) / sizeof(arr[0]), fptr);
    fclose(fptr);

    /* read array from file */
    fptr = fopen("datafile.bin", "rb");
    fread(x, sizeof(arr[0]), sizeof(arr) / sizeof(arr[0]), fptr);
    fclose(fptr);

    /* print array */
    for (k = 0; k < 100; k += 1)
        printf("%d\n", x[k]);
    return 0;
}
