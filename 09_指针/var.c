//var.c - 定义全局变量/函数 
#include <stdio.h>

int g_a = 520;//定义初始化全局变量
//定义静态全局变量
static int g_b = 520;

//定义静态全局函数, 不可以跨文件访问
static void print1(void){
    printf("print1 : g_b = %d\n", g_b);//ok
    printf("print1 : g_a = %d\n", g_a);//ok
}
//定义全局函数
//生命周期:程序运行分配直到程序结束
//使用范围:只要做个声明,随便用
void print(void){
    printf("print : g_a = %d\n", g_a);
    printf("print : g_b = %d\n", g_b);
    print1();
}
