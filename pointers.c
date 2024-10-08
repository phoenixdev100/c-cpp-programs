#include <stdio.h>
int swap(int *, int *);
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter values of A and B: ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    return 0;
}
int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("Values of A and B are %d and %d.", *x, *y);
    // return (*x, *y);
}