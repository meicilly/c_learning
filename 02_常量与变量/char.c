#include <stdio.h>
/**
  分配1个字节存储区, 打了个标签为c, 将字符'a'对应的数字放到该字节中 
    int - 4字节 - %d 
    char - 1字节 - half half %d - %hhd 

转义字符
    '\n' - 换行
    '\r' - 当前行行首

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
    char c = 'A';//分配一字节存储区 存储字符A的ascii值65
    printf("c = %c\n",c);//按照字符常量的方式输出
    printf("c = %hhd\n",c);//按照数字的方式输出

    c = c + 1; //c = 66 = B
    printf("c = %c\n",c);//按照字符常量的方式输出
    printf("c = %hhd",c);//按照数字的方式输出

    char d = 68;
    printf("d = %c\n", d);//按照字符常量的方式输出
    printf("d = %hhd\n", d);//按照数字的方式输出 

    printf("hello\r123456\n");//123456
    printf("hello\tworld\n");// \t是tab键
    printf("hello\vworld\n");
    printf("hello\bworld\n");//hellworld
    printf("\'hello\'\n");//'hello'
    printf("\"hello\"\n");//"hello"
    printf("100%%\n");//100%
    return 0;
}