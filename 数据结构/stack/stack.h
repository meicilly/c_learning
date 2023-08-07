#ifndef _STACK_H
#define _STACK_H
//����������ͷ�ļ�
#include <stdio.h>
#include <stdlib.h>
//��������ջ�����Խṹ
typedef struct stack{
    int* arr;//��Ϊջ���׵�ַ
    int cap;//��Ϊջ������
    int top;//ջ��
}stack_t;
extern void stack_init(stack_t* stack,int cap);//��ʼ��
extern void stack_deinit(stack_t* stack);//�ͷ�
extern int stack_full(stack_t* stack);//�ж���
extern int stack_empty(stack_t* stack);//�жϿ�
extern void stack_push(stack_t* stack, int data);//��ջ
extern int stack_pop(stack_t* stack);//��ջ
extern int stack_size(stack_t* stack);//ջ��Ԫ�ظ���
extern int stack_peek(stack_t* stack);//ȡ��ջ��Ԫ��
#endif