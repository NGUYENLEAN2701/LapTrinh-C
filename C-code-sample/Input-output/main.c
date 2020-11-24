#include <stdio.h>

int main()
{

    char a = getchar();
    printf("You entered:");
    putchar(a);

    char s[100];
    gets(s);
    printf("\nYou entered:");
    puts(s);

    int c, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &c, &b);
    printf("Sum: %d\n", c + b);

    int x;
    float y;
    char text[20];

    scanf("%d %f %5s", &x, &y, &text);
    /* input: 1234  5.7  elephant */
    printf("%d  %.2f  %s", x, y, text);
    /* output: 12  34  eleph */

    return 0;
}