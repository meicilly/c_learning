#include "stack.h"
//ջ�ĳ�ʼ��
void stack_init(stack_t* stack,int cap){
    //��ջ�����ڴ�
    stack->arr = malloc(sizeof(int)*cap);
    //��ʼ��ջ������
    stack->cap = cap;
    //��ʼ��top
    stack->top = 0;
}
//ջ���ڴ���ͷ�
void stack_deinit(stack_t* stack){
    free(stack->arr);//�ͷ��ڴ�
    stack->cap = 0;
    stack->top = 0;
}
//�ж�ջ�Ƿ�Ϊ��
int stack_full(stack_t* stack){
    //�� 1
    //���� 0
    return stack->top == stack->cap;
}
//�ж�ջ�Ƿ�Ϊ��
int stack_empty(stack_t* stack){
    //�� 1
    //�ǿ� 0
    return stack->top == 0;
}
//������ջ
void stack_push(stack_t* stack,int data){
    //�����ݷŵ��±�top��λ��
    stack->arr[stack->top] = data;
    stack->top++;
}
//�����ջ
int stack_pop(stack_t* stack){
    stack->top--;
    return stack->arr[stack->top];
}
//�ж�ջ����Ч���ݸ����ĺ���
int stack_size(stack_t* stack){
    return stack->top;
}