#include <stdio.h>
int main()
{
    int num = 30;
    int *ptr;
    *ptr = &num;

    printf("The con tent of num %d\n ", num);
    printf("use ptr to get num value  %d\n ", *ptr);

    return 0 ;

}
