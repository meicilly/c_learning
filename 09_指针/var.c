//var.c - ����ȫ�ֱ���/���� 
#include <stdio.h>

int g_a = 520;//�����ʼ��ȫ�ֱ���
//���徲̬ȫ�ֱ���
static int g_b = 520;

//���徲̬ȫ�ֺ���, �����Կ��ļ�����
static void print1(void){
    printf("print1 : g_b = %d\n", g_b);//ok
    printf("print1 : g_a = %d\n", g_a);//ok
}
//����ȫ�ֺ���
//��������:�������з���ֱ���������
//ʹ�÷�Χ:ֻҪ��������,�����
void print(void){
    printf("print : g_a = %d\n", g_a);
    printf("print : g_b = %d\n", g_b);
    print1();
}
