//ָ���̹淶 ��֪��ָ��˭ ��ʼ��Ϊnull
#include <stdio.h>

int main(void){
    int* pa = NULL;
    int a = 520;
    pa = &a;
    if(pa == NULL){
        printf("paû��ָ����Ч�ڴ�\n");
        return -1;
    }
    printf("*pa = %d\n",*pa);
    *pa = 521;
    printf("*pa = %d\n",*pa);
    return 0;
}