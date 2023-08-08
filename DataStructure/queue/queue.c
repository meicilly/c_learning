#include "queue.h"

void queue_init(queue_t* queue,int cap){
    queue->arr = malloc(sizeof(int) * cap);
    queue->cap = cap;
    queue->size = 0;
    queue->front = 0;
    queue->rear = 0;
}

void queue_dinit(queue_t* queue){
    free(queue->arr);
    queue->cap = 0;
    queue->size = 0;
    queue->front = 0;
    queue->rear = 0;
}

bool queue_full(queue_t* queue){
    if(queue->cap == queue->size){
        return true;
    }
    return false;
}

bool queue_empty(queue_t* queue){
    if(queue->size == 0){
        return true;
    }
    return false;
}

void queue_push(queue_t* queue,int data){
    if(queue->cap == queue->rear)
        queue->rear = 0;//构造循环队列
    queue->arr[queue->rear++] = data;
    queue->size++;
}

int queue_pop(queue_t* queue){
    if(queue->cap == queue->front)
        queue->front = 0;//构造循环队列
    queue->size--;
    return queue->arr[queue->front++];
}

//定义返回有效数据个数的函数
int queue_size(queue_t* queue){
    return queue->size;
}