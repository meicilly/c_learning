#include <stdio.h>

int main(void){
    printf("char类型占有的字节数%lu\n",sizeof(char));
    printf("unsigned char类型占有的字节数%lu\n",sizeof(unsigned char));
    printf("short类型占有的字节数%lu\n",sizeof(short));
    printf("unsigned short类型占有的字节数%lu\n",sizeof(unsigned short));
    printf("int类型占有的字节数%lu\n",sizeof(int));
    printf("unsigned int类型占有的字节数%lu\n",sizeof(unsigned int));
    printf("long类型占有的字节数%lu\n",sizeof(long));
    printf("unsigned long类型占有的字节数%lu\n",sizeof(unsigned long));
    printf("float类型占有的字节数%lu\n",sizeof(float));
    printf("double类型占有的字节数%lu\n",sizeof(double));

    int a = 520;
    //gcc看到整形常量 - int 
    printf("%lu %lu %lu\n", sizeof(a), sizeof(521), sizeof(1+1));
    return 0;
}

/**
unsigned - 无符号 - 没有正负 - 只有非负数 

char 
short 
int  
long
long long  

浮点数 
float
double 
        8位系统     32      64
int       2        4        4
long      4        4        8
 * **/