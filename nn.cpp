// C/C++ program to swap two variables in single line
#include <stdio.h>
int main()
{
    int x = 3, y = 7;
    (x ^= y), (y ^= x);//, (x ^= y);
    printf("After Swapping values of x and y are %d %d",y, x);
    return 0;
}
