#include <stdio.h>

int main(void){
    //���������
    int a = 10 > 5 ? 10 : 5;
    printf("a = %d\n", a);

    a = 10;
    int b = 9;
    int c;
    //(9 == 9) -> a = 9, b = 10 -> --a -> a = 8, c = 8;
    c = (--a == b++) ? --a : b++;
    printf("a = %d, b = %d, c = %d\n", a, b, c);//8 10 8

    //���������
    int i = 2, j = 4, k = 6, x, y;
    y = (x = i + j, j + k);
    printf("%d, %d\n", x, y);//6 10
    y = (x += 100, ++x);
    printf("%d, %d\n", x, y);//107 107

    //ȡ��ַ�ͽ����������
    int d = 100;
    printf("%p\n", &d);
    printf("%d\n", *&d);//ͨ����ַ��ȡ����d��ֵ
    *&d = 101;//ͨ����ַ�޸��ڴ�ֵ
    printf("%d\n", *&d);//ͨ����ַ��ȡ����d��ֵ





    return 0;
}
