#include <stdio.h>

int main(void){
    int a = 520;
    int* pa = &a;//�����ʼ��ָ�����pa����a���׵�ַ, ���paָ��a
    printf("&a = %p, pa = %p, &pa = %p\n", &a, pa, &pa);//%
    //��ӡa��ֵ paָ���ڴ�ֵ
    printf("a = %d,*pa = %d\n",a,*pa);
    //ͨ��pa�޸�a���ڴ�ֵ
    *pa = 1024;
    printf("a = %d,*pa = %d\n",a,*pa);

    int b = 521;
    pa = &b;
    printf("&b = %p, pa = %p, &pa = %p\n", &b, pa, &pa);
     //��ӡb��ֵ, paָ����ڴ�ֵ
    printf("b = %d, *pa = %d\n", b, *pa);
    //ͨ��pa�޸ı���b���ڴ�ֵ
    *pa = 1124;
    printf("b = %d, *pa = %d\n", b, *pa);
    return 0;
}