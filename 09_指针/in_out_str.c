#include <stdio.h>

int main(void){
    char str[100] = {};
    gets(str);//从键盘读取字符串存储到str数组中
    puts(str);//输出到终端上，自动追加\n
    return 0;
}