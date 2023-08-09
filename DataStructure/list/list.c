#include "list.h"

//�����½ڵ� ����ʼ���½ڵ㺯��
static node_t* create_node(int data){
    //�����ڴ�
    node_t* pnew = (node_t *)malloc(sizeof(node_t));
    //��ʼ���ڵ��ڴ�
    pnew->data = data;
    pnew->next = NULL;
    //�����½ڵ���׵�ַ
    return pnew;
}
void list_init(list_t* list){
    //��ͷ�ڵ�����ڴ�
    list->head = create_node(0);
    //��β�ڵ�����ڴ�
    list->tail = create_node(0);
    //��λ����
    list->head->next = list->tail;
    list->tail->next = NULL;
}
//������ı���
void list_travel(list_t* list){
    for(node_t* pnode = list->head;pnode != list->tail;pnode = pnode->next){
        //���������α�
        node_t* pfirst = pnode;
        node_t* pmid = pfirst->next;
        node_t* plast = pmid->next;
        //�ж�pmid
        if(pmid != list->tail){
            printf("%d",pmid -> data);
        }
        printf("\n");
    }
}
//�������˳����뺯��
void list_add(list_t* list,int data){
    //1.�����µĽڵ�
    node_t* pnew = create_node(data);
    //2.����Ҫ���������
    for(node_t* pnode = list->head;pnode != list->tail;pnode = pnode->next){
        node_t* pfirst = pnode;
        node_t* pmid = pfirst->next;
        node_t* plast = pmid->next;
        //2.�ҵ�Ҫ���뵽��λ��, ���뵽pfirst��pmid֮��
        //head---->10----->20----------->30---->tail
        //               pfirst        pmid
        //                     pnew(25)
        //head---->10----->20----------->30----------->tail
        //                             pfirst          pmid
        //                                   pnew(40)
        if(pmid->data >= pnew->data || pmid == list->tail/* �½�������������������*/){
            pfirst->next = pnew;
            pnew->next = pmid;
            break;
        }
    }
}

//ɾ��ĳ�����ĺ���
void list_del(list_t* list, int data){
    //head---->10---->20---->30---->tail
    //        pfirst pmid  plast
    //1.����Ҫɾ���Ľ��, ������pmidָ��Ҫɾ���Ľ��
    for(node_t* pnode = list->head; pnode != list->tail; pnode = pnode->next){
        //1.���������α�
        node_t* pfirst = pnode;
        node_t* pmid = pfirst->next;
        node_t* plast = pmid->next;
        if(pmid->data == data && pmid != list->tail/*���ܽ�β���ɾ��*/){
            pfirst->next = plast;//����ǰһ�����ͺ�һ�����
            free(pmid);//�ͷ�Ҫɾ���Ľ���ڴ�
            //pmid = NULL;
            break;
        }
    } 
}

//�����ͷ��������н��ĺ���
void list_deinit(list_t* list){
    node_t* pnode = list->head;
    while(pnode){
        node_t* ptmp = pnode->next;//��ʱ������һ��Ҫɾ���Ľ��
        free(pnode);//�ͷŽ���ڴ� 
        pnode = ptmp;//׼���ͷŵ���һ�����
    }
}

