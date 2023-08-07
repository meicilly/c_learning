//有效括号
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct stack{
    char* arr;//栈的首地址
    int top;//栈顶
    int cap;//栈的容量
}stack_t;

//栈的初始化
void stack_init(stack_t* stack,int cap){
    //给栈分配首地址
    stack->arr = malloc(sizeof(char) * cap);
    //初始化栈的容量
    stack->cap = cap;
    //初始化top
    stack->top = 0;
}
//栈的内存释放
void stack_deinit(stack_t* stack){
    free(stack->arr);
    stack->cap = 0;
    stack->top = 0;
}
//判断栈是否为满
int stack_full(stack_t* stack){
    //满1
    //非满 0
    return stack->top == stack->cap;
}
//判断栈是否为空
int stack_empty(stack_t* stack){
    return stack->top == 0;
}
//定义入栈
void stack_push(stack_t* stack,char data){
    stack->arr[stack->top] = data;
    stack->top++;
}
//定义出栈
int stack_pop(stack_t* stack){
    stack->top--;
    return stack->arr[stack->top];
}
//判断栈中有效数据个数的函数
int stack_size(stack_t* stack){
    return stack->top;
}
//取出栈顶的元素
int stack_peek(stack_t* stack){
    if(stack->top == 0){
        return 0;
    }
    return stack->arr[stack->top -1];
}
bool isVaild(const char* s){
    //定义栈变量
    stack_t stack;
    //初始化
    stack_init(&stack,20);
    for(int i = 0;i < strlen(s);i++){
        //拿出栈顶元素
        char top = stack_peek(&stack);
        printf("top的值是%c\n",top);
        printf("第s%d的值是%c\n",i,s[i]);
        //左括号入栈
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            printf("到了入栈\n");
            stack_push(&stack,s[i]);
        }
        //右括号能够匹配就出栈
        else if(s[i] == ')' && top == '(' || s[i] == ']' && top == '[' || s[i] == '}' && top == '{'){
            //出栈
            printf("到了出栈\n");
            stack_pop(&stack);
        }
        else{
            printf("到了这\n");
            stack_push(&stack,s[i]);
        }
    }
    //栈空为ture
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
        printf("括号匹配有效！\n");
    }else{
        printf("括号无效匹配有效！\n");
    }
    //printf("%d",&s);
    return 0;
}