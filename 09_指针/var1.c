//var1.c - 调用变量函数
#include <stdio.h>

//声明全局变量和全局函数
extern int g_a;
//extern int g_b;
extern void print(void);
//extern void print1(void);

int main(void){
    printf("main : g_a = %d\n", g_a);
    //printf("main : g_b = %d\n", g_b);
    print();
    //print1();
    return 0;
}
