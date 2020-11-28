#include <stdio.h>

void main()
{
    int a[5] = {22, 33, 44, 55, 66};
    int *ptr = NULL;
    int i;

    ptr = a; //! <=> ptr =&a[0]
    for (i = 0; i < 5; i++)
    {

        printf(" %d\n", *(ptr));
        ptr++;
    }

    ptr = a;                       /* point to the first array element */
    printf("%d  %x\n", *ptr, ptr); /* 22 */
    ptr++;
    printf("%d  %x\n", *ptr, ptr); /* 33 */
    ptr += 3;
    printf("%d  %x\n", *ptr, ptr); /* 66 */
    ptr--;
    printf("%d  %x\n", *ptr, ptr); /* 55 */
    ptr -= 2;
    printf("%d  %x\n", *ptr, ptr); /* 33 */
}