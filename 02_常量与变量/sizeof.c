#include <stdio.h>

int main(void){
    printf("char����ռ�е��ֽ���%lu\n",sizeof(char));
    printf("unsigned char����ռ�е��ֽ���%lu\n",sizeof(unsigned char));
    printf("short����ռ�е��ֽ���%lu\n",sizeof(short));
    printf("unsigned short����ռ�е��ֽ���%lu\n",sizeof(unsigned short));
    printf("int����ռ�е��ֽ���%lu\n",sizeof(int));
    printf("unsigned int����ռ�е��ֽ���%lu\n",sizeof(unsigned int));
    printf("long����ռ�е��ֽ���%lu\n",sizeof(long));
    printf("unsigned long����ռ�е��ֽ���%lu\n",sizeof(unsigned long));
    printf("float����ռ�е��ֽ���%lu\n",sizeof(float));
    printf("double����ռ�е��ֽ���%lu\n",sizeof(double));

    int a = 520;
    //gcc�������γ��� - int 
    printf("%lu %lu %lu\n", sizeof(a), sizeof(521), sizeof(1+1));
    return 0;
}

/**
unsigned - �޷��� - û������ - ֻ�зǸ��� 

char 
short 
int  
long
long long  

������ 
float
double 
        8λϵͳ     32      64
int       2        4        4
long      4        4        8
 * **/