#ifndef _QUEUE_H
#define _QUEUE_H
//包含公共的头文件
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//声明队列的数据结构
typedef struct queue{
    int* arr;//首地址
    int cap;//容量
    int size;//有效数据的个数
    int front;//队首
    int rear;//队尾
}queue_t;
//声明函数操作
extern void queue_init(queue_t* queue,int cap);//初始化
extern void queue_dinit(queue_t* queue);//释放
extern bool queue_full(queue_t* queue);//判断是否满了
extern bool queue_empty(queue_t* queue);//判断是否为空
extern void queue_push(queue_t* queue, int data);//入队
extern int queue_pop(queue_t* queue);//出队
extern int queue_size(queue_t* queue);//出队

#endif // !_QUEUE_H
#define _QUEUE_H
