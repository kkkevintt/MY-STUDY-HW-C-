#include <stdio.h>
void swap(int *, int *);

int main()
{
    int x, y;
    x = 100;
    y = 200;
    printf("Initial...\n");
    printf("x = %d y = %d\n ", x, y);
    swap(&x, &y);
    printf("\nAfter swapping ,,,\n");
    printf("x = %d y = %d\n ", x, y);
    return 0;
}
void swap(int *a, int *b)
{
    int temp;

    printf("\n IN swap() ...\n");
    printf("*a = %d *b = %d\n", *a, *b);
    temp = *a;
    *a = *b;
    *b = temp;
    printf("End swap()...\n ");
    printf("*a = %d *b = %d\n", *a, *b);
}