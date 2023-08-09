#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>

typedef int SLDataType;

//单链表结构的基本定义
typedef struct SListNode{
    SLDataType data;
    struct SListNode* next;//存储下一个地址
}SListNode,SLN;
//打印单链表
extern void SListPrint(SListNode* phead);
//单链表的尾插
extern void SListPushBack(SListNode** pphead,SLDataType data);
//单链表的头插
extern void SListPushFront(SListNode** pphead,SLDataType data);

