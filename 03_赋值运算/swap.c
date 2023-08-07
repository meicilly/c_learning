#include <stdio.h>

int main(void){
    int a  = 10, b = 20;
    printf("%d,%d\n",&a,&b);
    int tmp = 0;
    tmp = a;
    a = b;
    b = tmp;
    printf("a = %d, b = %d\n",a,b);
    printf("%d,%d\n",&a,&b);
    return 0;
}