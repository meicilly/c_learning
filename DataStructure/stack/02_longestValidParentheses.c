#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct stack{
    char* arr;//ջ���׵�ַ
    int cap;//ջ������
    int top;//ջ��
}stack_t;

void stack_init(stack_t* stack,int cap){
    stack->arr = malloc(sizeof(char) * cap);
    stack->cap = cap;
    stack->top =0;
}
void stack_deinit(stack_t* stack){
    free(stack->arr);
    stack->cap = 0;
    stack->top = 0;
}

bool stack_full(stack_t* stack){
    if(stack->top == stack->cap){
        return true;
    }
    return false;
}

bool stack_empty(stack_t* stack){
    if(stack->top == 0){
        return true;
    }
    return false;
}

void stack_push(stack_t* stack,char data){
    stack->arr[stack->top] = data;
    stack->top++;
}

char stack_pop(stack_t* stack){
    if(stack->top != 0){
        stack->top--;
        return stack->arr[stack->top];
    }
    return stack->top;
}

int stack_size(stack_t* stack){
    return stack->top;
}

//ȡ��ջ����Ԫ��
char stack_peek(stack_t* stack){
    if(stack->top == 0){
        return 0;
    }
    return stack->arr[stack->top -1];
}



int longestValid(char* s){
    stack_t stack;
    stack_init(&stack,20);
    int j = 0;
    for(int i = 0;i < strlen(s);i++){
        char top = stack_peek(&stack);
           //��������ջ
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            printf("������ջ\n");
            stack_push(&stack,s[i]);
        }
        //�������ܹ�ƥ��ͳ�ջ
        else if(s[i] == ')' && top == '(' || s[i] == ']' && top == '[' || s[i] == '}' && top == '{'){
            //��ջ
            printf("���˳�ջ\n");
            //���ǰ������ top != -1
            stack_pop(&stack);
            j++;
        }
        else{
            printf("������\n");
            stack_push(&stack,s[i]);
        }
    }
    return j * 2;
}

int main(void){
    // stack_t stack;
    // stact_init(&stack,20);
    char data[] = "{{[]}}}}{}";
    char* s = data;
    int a = longestValid(s);
    printf("%d",a);
    // for(int i = 0;i < strlen(s);i++){
    //     stack_push(&stack,s[i]);
    //     printf("ջ�е���Ч���ݸ�����:%d��\n", stack_size(&stack));
    // }
    // stact_deinit(&stack);
    return 0;
}