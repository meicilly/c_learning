#ifndef _LIST_H
#define _LIST_H
//公共头文件
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;//数据节点
    struct node* next;//下一个节点的首地址
}node_t;
//声明单链表的结构体
typedef struct list{
    struct node* head;//保存头节点的首地址
    struct node* tail;//保存尾结点的首地址
}list_t;
//声明单链表的操作函数
extern void list_init(list_t* list);//初始化
extern void list_travel(list_t* list);//遍历
extern void list_deinit(list_t* list);//释放
extern void list_add(list_t* list, int data);//插入
extern void list_del(list_t* list, int data);//删除
#endif