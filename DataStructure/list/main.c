#include "list.h"

int main(void){
    //����������
    list_t list;
    list_init(&list);
    //���ֲ���ͱ���
    list_add(&list, 10);
    list_add(&list, 20);
    list_add(&list, 30);
    list_add(&list, 40);
    list_travel(&list);
    list_add(&list, 80);
    list_add(&list, 50);
    list_add(&list, 90);
    //ɾ�����
    list_del(&list, 30);
    list_travel(&list);
    //�ͷŵ�����
    list_deinit(&list);

    return 0;
}
