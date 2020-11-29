#include <stdio.h>

int main()
{

    char str[3] = "";
    printf("Xin nhap ten cua ban: ");
    gets(str);
    printf("Xin chao %s den voi Lap Trinh C", str);
    printf("\nXin nhap ten vo cua ban: ");
    fgets(str, 5, stdin);
    printf("Vo ban la: %s", str);
    return 0;
}