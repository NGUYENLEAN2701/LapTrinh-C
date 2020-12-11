#include <stdio.h>

int main()
{
    FILE *fptr;
    int c, stock;
    char buffer[200], item[10];
    float price;

    /* myfile.txt: Inventory\n100 Widget 0.29\nEnd of List */

    fptr = fopen("test.txt", "r");

    fgets(buffer, 200, fptr); /* read a line */
    printf("%s\n", buffer);

    fscanf(fptr, "%d%s%f", &stock, item, &price); /* read data */
    printf("%d  %s  %4.2f\n", stock, item, price);

    while ((c = getc(fptr)) != EOF) /* read the rest of the file */
        printf("%c", c);

    fclose(fptr);
    return 0;
}