#include <stdio.h>
/**
#include将后面的文件包含到当前文件中
    #include <stdio.h>
    将stdio.h文件拷贝到当前所在的位置
    基本上是C语言的程序 都会包含该文件
    <stdio.h> 需要该代码后会去Linux系统路径/usr/include寻找stdio.h, 找到后就将其拷贝到当前位置上
stdio.h -> standard input output . header
**/ 
int main(void){
    printf("我的第一个C程序\n");
    return 0;
}
/**
 gcc编译程序的步骤
 1.预处理
    将源文件中包含的头文件拷贝到当前的.c文件中
    #include <stdio.h> gcc编译器第一步就会将stdio.h文件内容拷贝过来
    gcc -E 01_hell0.c -o hello.i
2.编译
    将预处理得到的.i文件进行编译得到汇编文件
        汇编文件: .s / .S - 汇编代码
    gcc -S hello.i -o hello.s 
3.汇编
    将编译后得到的.s文件经过汇编得到计算机可以识别的机器文件 - 二进制
        该文件叫做目标文件
        目标文件：-o  object
    gcc -c hello.s -o hello.o
4.链接
    gcc hello.o -o hello 也是一步到位的
gcc选项:
    -E : 预处理, 只会预处理 
    -o : 指定输出的文件名 
    -S : 只进行编译步骤 
    -c : 只进行汇编步骤 
 **/