//指针运算：和数据类型相关
#include <stdio.h>

int main(void){
    char a = 'a';
    char* pa = &a;
    printf("%p\n", pa);
    pa++;
    printf("%p\n", pa);
    printf("--------------\n");
    int b = 100;
    int* pb = &b;
    printf("%p\n", pb);
    pb++;
    printf("%p\n", pb);
    printf("--------------\n");
    double d = 5.6;
    double* pd = &d;
    printf("%p\n", pd);
    pd++;
    printf("%p\n", pd);
    printf("--------------\n");

    long l = 100;
    long* pl = &l;
    printf("%p\n", pl);
    pl++;
    printf("%p\n", pl);
    printf("--------------\n");

    return 0;
}
