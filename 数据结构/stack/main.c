#include "stack.h"

int main(void){
    //����ջ����
    stack_t stack;
    //ջ�ĳ�ʼ��
    stack_init(&stack, 20);
    int data = 520;
    while(!stack_full(&stack))//ѹջ
        stack_push(&stack, data++);
    printf("ջ�е���Ч���ݸ�����:%d��\n", stack_size(&stack));
    printf("ջ�е�����Ϊ:");
    //ѭ����ջ
    // while(!stack_empty(&stack))//�ǿ�
    //     printf("%d ", stack_pop(&stack));
    // printf("\n");
    // printf("ջ�е���Ч���ݸ�����:%d��\n", stack_size(&stack));

    //ȡ��ջ����Ԫ��
    int peek = stack_peek(&stack);
    printf("ջ��Ԫ����%d",peek);

    //ջ���ڴ��ͷ�
    stack_deinit(&stack);
    return 0;
}