#include <stdio.h>
int main(void){
    int a = 100;
    void* p = &a;//p����a�ĵ�ַ������ָ���
    //printf("%d\n", *p);//error
    //��ӷ�
    int* p1 = (int *)p;//��������ָ��ת��Ϊint���͵�ָ�븳ֵ��p1,p1�������a���׵�ַ
    //int* p1 = &a;
    printf("%d\n", *p1);
    *p1 = 101;
    printf("%d\n", *p1);
    //ֱ�ӷ�
    *(int *)p = 202;//��������ָ��ת��Ϊint���͵�ָ��,Ȼ���������û�ȡpָ����ڴ�
                    //���ø�ֵ���㽫��ָ��������޸�Ϊ202
    printf("a = %d\n", a);
    printf("%d\n", *(int *)p);

    printf("%p\n", p);
    printf("%p\n", ++p);
    printf("%p\n", ++p);
    return 0;
}
