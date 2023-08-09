#ifndef _LIST_H
#define _LIST_H
//����ͷ�ļ�
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;//���ݽڵ�
    struct node* next;//��һ���ڵ���׵�ַ
}node_t;
//����������Ľṹ��
typedef struct list{
    struct node* head;//����ͷ�ڵ���׵�ַ
    struct node* tail;//����β�����׵�ַ
}list_t;
//����������Ĳ�������
extern void list_init(list_t* list);//��ʼ��
extern void list_travel(list_t* list);//����
extern void list_deinit(list_t* list);//�ͷ�
extern void list_add(list_t* list, int data);//����
extern void list_del(list_t* list, int data);//ɾ��
#endif