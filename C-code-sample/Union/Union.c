#include <stdio.h>
#include <string.h>
union val
{
    int int_num;
    float fl_num;
    char str[20];
};
int main()
{
    union val test;
    strcpy(test.str, "hello");
    test.fl_num = 98.76;
    test.int_num = 88;
    printf("%d\n", test.int_num);
    printf("%.2f\n", test.fl_num);
    printf("%s\n", test.str);
    return 0;
}
