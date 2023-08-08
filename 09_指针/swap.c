#include <stdio.h>
int main(void){
    int a = 100;
    void* p = &a;//p保存a的地址，　ｐ指向ａ
    //printf("%d\n", *p);//error
    //间接法
    int* p1 = (int *)p;//将无类型指针转换为int类型的指针赋值给p1,p1保存变量a的首地址
    //int* p1 = &a;
    printf("%d\n", *p1);
    *p1 = 101;
    printf("%d\n", *p1);
    //直接法
    *(int *)p = 202;//将无类型指针转换为int类型的指针,然后做解引用获取p指向的内存
                    //利用赋值运算将ｐ指向的数据修改为202
    printf("a = %d\n", a);
    printf("%d\n", *(int *)p);

    printf("%p\n", p);
    printf("%p\n", ++p);
    printf("%p\n", ++p);
    return 0;
}
