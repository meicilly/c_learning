//ËãÊıÔËËã·ûÑİÊ¾
#include <stdio.h>

int main(void){
    int a = 5, b = 2;
    int c = 0;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);
    
    /*
    printf("a / c = %d\n", a / c);
    printf("a %% c = %d\n", a % c);
    */
    double d = 0.0;
    //0.000000000000000000001
    printf("a / d = %lf\n", a / d);
    //printf("a %% d = %lf\n", a % d);

    printf("%d, %d\n", -7/3, 7/-3);
    printf("%d, %d\n", -7%3, 7%-3);
    printf("%d\n", -7%-3);

    return 0;
}
