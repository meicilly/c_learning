//ָ�뺯����������������һ����ַ
#include <stdio.h>
//��������
extern int* A(void);//����int*����ָ��
int main(void){
    int* p = NULL;
    p = A();//����ָ�뺯��������ʹ�ñ���p�������䷵��ֵ
    printf("p = %p\n", p);
    *p = 520;
    printf("%d\n", *p);
    return 0;
}
int g_a = 1024;
static int g_b = 2048;
int* A(void){
    //int a = 100;
    //return &a;//�������������������ڽ���������Ұָ��
    static int b = 100;
    //return &b;//ok
    //return &g_a;//ok
    return &g_b;//ok
}


