#include <stdio.h>

int main(void){
    int age;//����int�����ĸ��ֽ�
    printf("age = %d\n",age);
    printf("����������");
    scanf("%d",&age);//&age��ȡ����age�õ��׵�ַ
                    //%d : ����ռλ��, �Ӽ��̻�ȡ������Ϊ��������
                      //˫��������ֻ��ռλ��, ��Ҫ���κ���������
                      //����ִ�е�scanf����, �����ֹͣ���� , �ȴ��û��Ӽ�������
                      //����һ����������, ������ϰ��س���
                      //���������scanf��������, ������������
                      //result:�����ݵ����ݱ��浽�˱���age��
    printf("age = %d\n",age);

    int height;//�������, ����4�ֽ��ڴ�, �洢��� 
    printf("��������������, ����֮��ʹ�ÿո����:");
    scanf("%d%d", &age, &height);
    printf("age = %d, height = %d\n", age, height);
    return 0;
}