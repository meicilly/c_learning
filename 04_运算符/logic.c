//�߼������
#include <stdio.h>

int main(void){
    //�߼�������:&&
    printf("%d\n", 5>3 && 5<8);//1
    printf("%d\n", 5>3 && 5>8);//0
    printf("%d\n", 5<3 && 5<8);//0
    printf("%d\n", 5<3 && 5>8);//0

    //�߼�������:||
    printf("%d\n", 5>3 || 5<8);//1
    printf("%d\n", 5>3 || 5>8);//1
    printf("%d\n", 5<3 || 5<8);//1
    printf("%d\n", 5<3 || 5>8);//0

    printf("%d\n", 5<3 || 5<8 || 520);//1

    //�߼���:!
    printf("%d\n", !(10>20));//1
    printf("%d\n", !520);//0
    printf("%d\n", !0);//1

    //��·����
    int a = 10;
    printf("%d\n", (5>3) && (a=100));//1
    printf("a = %d\n", a);//100

    printf("%d\n", (5<3) && (a=200));//0
    printf("a = %d\n", a);//100

    printf("%d\n", (5>3) || (a=300));//1
    printf("a = %d\n", a);//100
    
    printf("%d\n", (5<3) || (a=400));//1
    printf("a = %d\n", a);//400

    printf("5<4<3�Ľ����%d\n", 5<4 && 4<3);
    return 0;
}







