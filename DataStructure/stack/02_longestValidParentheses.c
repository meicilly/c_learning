#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct stack{
    char* arr;//栈的首地址
    int cap;//栈的容量
    int top;//栈顶
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

//取出栈顶的元素
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
           //左括号入栈
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            printf("到了入栈\n");
            stack_push(&stack,s[i]);
        }
        //右括号能够匹配就出栈
        else if(s[i] == ')' && top == '(' || s[i] == ']' && top == '[' || s[i] == '}' && top == '{'){
            //出栈
            printf("到了出栈\n");
            //添加前提条件 top != -1
            stack_pop(&stack);
            j++;
        }
        else{
            printf("到了这\n");
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
    //     printf("栈中的有效数据个数是:%d个\n", stack_size(&stack));
    // }
    // stact_deinit(&stack);
    return 0;
}