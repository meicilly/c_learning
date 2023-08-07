#include <stdio.h>

int main(void){
    printf("%d %d\n",100,200);
    
    int a = 520;//分配4个字节存储数据520 
    printf("a = %d\n",a);

    int b;
    printf("b = %d\n",b);//没有给变量初始化 会是随机的值

    int c, d = 100, e;
    printf("%d %d %d",c,d,e);
    return 0;
}