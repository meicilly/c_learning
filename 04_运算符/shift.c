#include <stdio.h>

int main(void){
    char a = 0x5a;//0101 1010
    char b = a << 2;//a左移2位
    short c = a << 2;//a左移2位
    printf("a = %#x, b = %#x, c = %#x\n", a, b, c);

    b = a >> 2;//0101 1010 >> 2 = 00010110 = 0x16
    printf("a = %#x, b = %#x\n", a, b);
    
    //a此时的符号位是1, 右移使用1填充
    a = 0xa5;//1010 0101
    b = a >> 2;//10100101 >> 2 -> 1110 1001
    printf("a = %#x, b = %#x\n", a, b);
    printf("a = %#hhx, b = %#hhx\n", a, b);

    return 0;
}
