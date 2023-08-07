#include <stdio.h>

int main(void){
    int val = 0520;
    printf("val = %o\n",val);
    printf("val = %#o\n",val);

    printf("%x\n", 0x520);
    printf("%#x\n", 0x520);
    return 0;
}