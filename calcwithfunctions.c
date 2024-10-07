#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 2, b = 6;
    sum(a, b);
    return 0;
}
int sum(int a, int b)
{
    int add = a + b;
    printf("Sum is: %d", add);
}

// another form
//  int main(int argc, char const *argv[])
//  {
//      sum();
//      return 0;
//  }
//  int sum()
//  {
//      int a = 2, b = 6;
//      int add = a + b;
//      printf("Sum is: %d", add);
//  }