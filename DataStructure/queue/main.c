#include "queue.h"

int main(void){
    queue_t queue;
    queue_init(&queue,10);
      for(int i = 10; i <= 40; i += 10){
        if(!queue_full(&queue))
            queue_push(&queue, i);//���:10(0) 20(1) 30(2) 40(3) 
    }
    printf("������Ч���ݸ���Ϊ:%d\n", queue_size(&queue));
    for(int i = 0; i < 2; i++){
        if(!queue_empty(&queue))
            printf("%d ", queue_pop(&queue));
    }
    printf("\n");
}