//指针编程规范 不知道指向谁 初始化为null
#include <stdio.h>

int main(void){
    int* pa = NULL;
    int a = 520;
    pa = &a;
    if(pa == NULL){
        printf("pa没有指向有效内存\n");
        return -1;
    }
    printf("*pa = %d\n",*pa);
    *pa = 521;
    printf("*pa = %d\n",*pa);
    return 0;
}