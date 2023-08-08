#include <stdio.h>
/**
%d：用于输出整数类型（包括short、int、long、long long等）；
%u：用于输出无符号整数类型（包括unsigned short、unsigned int、unsigned long、unsigned long long等）；
%f：用于输出浮点数类型（包括float、double、long double等）；
%c：用于输出字符类型（包括char）；
%s：用于输出字符串类型（即指向字符数组或字符串字面量的char *类型）；
%p：用于输出指针类型（即指向任意类型的指针）；
%%：用于输出百分号。
 **/
int main(){
    int a[] = {1,2,3,4,5};
    int* pa = a;//pa指向a的首地址 pa指向a
    printf("%d\n",a);
    printf("%d %d %d %d\n",a[0],a[1],a[2],a[3]);
    printf("%d %d %d %d\n",*(a + 0),*(a + 1),*(a + 2),*(a + 3));
    printf("%d %d %d %d\n",*(pa + 0),*(pa + 1),*(pa + 2),*(pa + 3));
    printf("%d %d %d %d\n",pa[0],pa[1],pa[2],pa[3]);

    pa[0] = 100;
    *(pa + 1) = 200;
    printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);

    //不可以使用指针变量来解决
    printf("%lu\n", sizeof(a) / sizeof(a[0]));//16 a是一个数组
    printf("%lu\n", sizeof(pa)/ sizeof(a[0]));//8 pa是一个首地址8个字节
    return 0;
}