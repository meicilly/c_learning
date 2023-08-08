#ifndef _QUEUE_H
#define _QUEUE_H
//����������ͷ�ļ�
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//�������е����ݽṹ
typedef struct queue{
    int* arr;//�׵�ַ
    int cap;//����
    int size;//��Ч���ݵĸ���
    int front;//����
    int rear;//��β
}queue_t;
//������������
extern void queue_init(queue_t* queue,int cap);//��ʼ��
extern void queue_dinit(queue_t* queue);//�ͷ�
extern bool queue_full(queue_t* queue);//�ж��Ƿ�����
extern bool queue_empty(queue_t* queue);//�ж��Ƿ�Ϊ��
extern void queue_push(queue_t* queue, int data);//���
extern int queue_pop(queue_t* queue);//����
extern int queue_size(queue_t* queue);//����

#endif // !_QUEUE_H
#define _QUEUE_H
