#include <stdio.h>
/**
  ����1���ֽڴ洢��, ���˸���ǩΪc, ���ַ�'a'��Ӧ�����ַŵ����ֽ��� 
    int - 4�ֽ� - %d 
    char - 1�ֽ� - half half %d - %hhd 

ת���ַ�
    '\n' - ����
    '\r' - ��ǰ������

int                         - %d 
unsigned int                - %u 
short (int)                 - half %d - %hd  
unsigned short (int)        - half %u - %hu  
long (int)                  - long %d - %ld 
unsigned long (int)         - long %u - %lu - sizeof
long long (int)             - long long %d - %lld 
unsigned long long (int)    - long long %u - %llu 
*/

int main(void){
    char c = 'A';//����һ�ֽڴ洢�� �洢�ַ�A��asciiֵ65
    printf("c = %c\n",c);//�����ַ������ķ�ʽ���
    printf("c = %hhd\n",c);//�������ֵķ�ʽ���

    c = c + 1; //c = 66 = B
    printf("c = %c\n",c);//�����ַ������ķ�ʽ���
    printf("c = %hhd",c);//�������ֵķ�ʽ���

    char d = 68;
    printf("d = %c\n", d);//�����ַ������ķ�ʽ���
    printf("d = %hhd\n", d);//�������ֵķ�ʽ��� 

    printf("hello\r123456\n");//123456
    printf("hello\tworld\n");// \t��tab��
    printf("hello\vworld\n");
    printf("hello\bworld\n");//hellworld
    printf("\'hello\'\n");//'hello'
    printf("\"hello\"\n");//"hello"
    printf("100%%\n");//100%
    return 0;
}