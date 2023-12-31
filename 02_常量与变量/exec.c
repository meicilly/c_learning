#include <stdio.h>

int main(void){
    int val = 100;
    int val2 = 456;
    int sum = 20000;

    if(sum > 200){
        printf("hello\n");
        printf("world\n");
    }
    return 0;
}
/**
变量相关的概念
    字节(Byte):计算机内存分成一格一格，每一格用来存储一个数字，没一格对应的专业术语叫字节
    地址(Address):计算机给内存中的每个字节都指定一个唯一编号，编号从0开始，后续字节一次加1
    存储区(Buffer):计算机将1字节或者多个连续的字节形成一个存储单元简称存储区，又称缓冲区
    首地址(Base Address):又称首地址，存储区中第一个字节的地址用来当存储区的首地址，又称基地址
    原则:任何程序访问内存前先分配(操作系统负责分配)

在程序执行过程中，其值不发生改变的量称为常量
    直接常量
        整型量：10，10U，10L，10LL，012，0XA
        实型量：0.12，0.12F，1.2E-1
        字符量：'A'，'\n'
        字符串："hello world\n"
**/