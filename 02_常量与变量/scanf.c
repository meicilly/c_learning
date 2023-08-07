#include <stdio.h>

int main(void){
    int age;//定义int分配四个字节
    printf("age = %d\n",age);
    printf("请输入年龄");
    scanf("%d",&age);//&age获取变量age得到首地址
                    //%d : 整形占位符, 从键盘获取的数据为整形数据
                      //双引号里面只有占位符, 不要有任何其他内容
                      //程序执行到scanf函数, 程序就停止不动 , 等待用户从键盘输入
                      //输入一个整形数据, 输入完毕按回车键
                      //程序立马从scanf函数结束, 继续向下运行
                      //result:将数据的数据保存到了变量age中
    printf("age = %d\n",age);

    int height;//定义变量, 分配4字节内存, 存储身高 
    printf("请输入两个数字, 数字之间使用空格隔开:");
    scanf("%d%d", &age, &height);
    printf("age = %d, height = %d\n", age, height);
    return 0;
}