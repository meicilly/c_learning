#include <stdio.h>
/**
%d����������������ͣ�����short��int��long��long long�ȣ���
%u����������޷����������ͣ�����unsigned short��unsigned int��unsigned long��unsigned long long�ȣ���
%f������������������ͣ�����float��double��long double�ȣ���
%c����������ַ����ͣ�����char����
%s����������ַ������ͣ���ָ���ַ�������ַ�����������char *���ͣ���
%p���������ָ�����ͣ���ָ���������͵�ָ�룩��
%%����������ٷֺš�
 **/
int main(){
    int a[] = {1,2,3,4,5};
    int* pa = a;//paָ��a���׵�ַ paָ��a
    printf("%d\n",a);
    printf("%d %d %d %d\n",a[0],a[1],a[2],a[3]);
    printf("%d %d %d %d\n",*(a + 0),*(a + 1),*(a + 2),*(a + 3));
    printf("%d %d %d %d\n",*(pa + 0),*(pa + 1),*(pa + 2),*(pa + 3));
    printf("%d %d %d %d\n",pa[0],pa[1],pa[2],pa[3]);

    pa[0] = 100;
    *(pa + 1) = 200;
    printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);

    //������ʹ��ָ����������
    printf("%lu\n", sizeof(a) / sizeof(a[0]));//16 a��һ������
    printf("%lu\n", sizeof(pa)/ sizeof(a[0]));//8 pa��һ���׵�ַ8���ֽ�
    return 0;
}