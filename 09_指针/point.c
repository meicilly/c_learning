#include <stdio.h>

int main(void){
    int a = 520;
    int* pa = &a;//定义初始化指针变量pa保存a的首地址, 简称pa指向a
    printf("&a = %p, pa = %p, &pa = %p\n", &a, pa, &pa);//%
    //打印a的值 pa指向内存值
    printf("a = %d,*pa = %d\n",a,*pa);
    //通过pa修改a的内存值
    *pa = 1024;
    printf("a = %d,*pa = %d\n",a,*pa);

    int b = 521;
    pa = &b;
    printf("&b = %p, pa = %p, &pa = %p\n", &b, pa, &pa);
     //打印b的值, pa指向的内存值
    printf("b = %d, *pa = %d\n", b, *pa);
    //通过pa修改变量b的内存值
    *pa = 1124;
    printf("b = %d, *pa = %d\n", b, *pa);
    return 0;
}