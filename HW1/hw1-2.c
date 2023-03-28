#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;
    int *ptr;

    // 使用 time 函数获取当前时间作为种子，传递给 srand 函数
    srand(time(NULL));

    // 生成 1 到 100 之间的亂數
    num = rand() % 100 + 1;
    printf("num = %d\n", num);

    // 將指標 ptr 指向 num
    ptr = &num;
    printf("num = %d \n",num );
    printf("use ptr pointer to num and add 20 \n");

    // 通過指標 ptr 修改 num 的值
    *ptr += 20;
    printf("num of value = %d \n", num);

    return 0;
}
