#ifndef _STACK_H
#define _STACK_H
//包含公共的头文件
#include <stdio.h>
#include <stdlib.h>
//声明描述栈的属性结构
typedef struct stack{
    int* arr;//作为栈的首地址
    int cap;//作为栈的容量
    int top;//栈顶
}stack_t;
extern void stack_init(stack_t* stack,int cap);//初始化
extern void stack_deinit(stack_t* stack);//释放
extern int stack_full(stack_t* stack);//判断满
extern int stack_empty(stack_t* stack);//判断空
extern void stack_push(stack_t* stack, int data);//入栈
extern int stack_pop(stack_t* stack);//出栈
extern int stack_size(stack_t* stack);//栈的元素个数
extern int stack_peek(stack_t* stack);//取出栈顶元素
#endif