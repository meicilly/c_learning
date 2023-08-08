//指针函数　－　函数返回一个地址
#include <stdio.h>
//函数声明
extern int* A(void);//返回int*类型指针
int main(void){
    int* p = NULL;
    p = A();//调用指针函数Ａ并且使用变量p来保存其返回值
    printf("p = %p\n", p);
    *p = 520;
    printf("%d\n", *p);
    return 0;
}
int g_a = 1024;
static int g_b = 2048;
int* A(void){
    //int a = 100;
    //return &a;//函数结束变量生命周期结束，出现野指针
    static int b = 100;
    //return &b;//ok
    //return &g_a;//ok
    return &g_b;//ok
}


