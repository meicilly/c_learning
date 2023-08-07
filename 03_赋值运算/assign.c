//赋值运算符演示
#include <stdio.h>

int main(void){
    int a,b,c;
    a = 100;
    printf("a = %d\n",a);

    a = b = c = 520;
    printf("%d,%d,%d",a,b,c);

    //复合赋值
    a += 20;
    printf("a = %d\n",a);
    return 0;
}