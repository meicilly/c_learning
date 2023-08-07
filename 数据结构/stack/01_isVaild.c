//��Ч����
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct stack{
    char* arr;//ջ���׵�ַ
    int top;//ջ��
    int cap;//ջ������
}stack_t;

//ջ�ĳ�ʼ��
void stack_init(stack_t* stack,int cap){
    //��ջ�����׵�ַ
    stack->arr = malloc(sizeof(char) * cap);
    //��ʼ��ջ������
    stack->cap = cap;
    //��ʼ��top
    stack->top = 0;
}
//ջ���ڴ��ͷ�
void stack_deinit(stack_t* stack){
    free(stack->arr);
    stack->cap = 0;
    stack->top = 0;
}
//�ж�ջ�Ƿ�Ϊ��
int stack_full(stack_t* stack){
    //��1
    //���� 0
    return stack->top == stack->cap;
}
//�ж�ջ�Ƿ�Ϊ��
int stack_empty(stack_t* stack){
    return stack->top == 0;
}
//������ջ
void stack_push(stack_t* stack,char data){
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
//ȡ��ջ����Ԫ��
int stack_peek(stack_t* stack){
    if(stack->top == 0){
        return 0;
    }
    return stack->arr[stack->top -1];
}
bool isVaild(const char* s){
    //����ջ����
    stack_t stack;
    //��ʼ��
    stack_init(&stack,20);
    for(int i = 0;i < strlen(s);i++){
        //�ó�ջ��Ԫ��
        char top = stack_peek(&stack);
        printf("top��ֵ��%c\n",top);
        printf("��s%d��ֵ��%c\n",i,s[i]);
        //��������ջ
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            printf("������ջ\n");
            stack_push(&stack,s[i]);
        }
        //�������ܹ�ƥ��ͳ�ջ
        else if(s[i] == ')' && top == '(' || s[i] == ']' && top == '[' || s[i] == '}' && top == '{'){
            //��ջ
            printf("���˳�ջ\n");
            stack_pop(&stack);
        }
        else{
            printf("������\n");
            stack_push(&stack,s[i]);
        }
    }
    //ջ��Ϊture
    if(stack_empty(&stack)){
        return true;
    }else{
        return false;
    }
}

int main(void){
    const char* s = "{}";
    //char* s[] = "{}";
    if(isVaild(s)){
        printf("����ƥ����Ч��\n");
    }else{
        printf("������Чƥ����Ч��\n");
    }
    //printf("%d",&s);
    return 0;
}