//自增自减运算
#include <stdio.h>

int main(void){
    int a = 10;
    //先对a的值加上1, 然后使用a的值进行计算
    printf("%d\n", ++a);//先对a的值加1, 然后计算机++a的结果就是a的值结果11
    printf("%d\n", a);

    a = 10;
    //先使用a的值进行计算, 然后对a的值加1
    printf("%d\n", a++);//先使用a的值进行计算就是10, 然后对a的值加1, a变为了11
    printf("%d\n", a);

    int b = 100;
    //先对b的值减1, 让后使用b的值进行计算
    printf("%d\n", --b);//99
    printf("%d\n", b);//99

    b = 100;
    //先使用b的值进行计算, 然后对b的值减1
    printf("%d\n", b--);//100
    printf("%d\n", b);//99

    a = 10;
    printf("%d\n", a++ + ++a);//22
    a = 10;
    printf("%d\n", ++a + a++);//23
    return 0;
}





