#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>

typedef int SLDataType;

//������ṹ�Ļ�������
typedef struct SListNode{
    SLDataType data;
    struct SListNode* next;//�洢��һ����ַ
}SListNode,SLN;
//��ӡ������
extern void SListPrint(SListNode* phead);
//�������β��
extern void SListPushBack(SListNode** pphead,SLDataType data);
//�������ͷ��
extern void SListPushFront(SListNode** pphead,SLDataType data);

