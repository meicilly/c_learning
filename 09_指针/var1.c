//var1.c - ���ñ�������
#include <stdio.h>

//����ȫ�ֱ�����ȫ�ֺ���
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
