#include <stdio.h>
// function prototype
int add(int a, int b);

int main()
{
    printf("%d", add(4, 45));
}

// function defination, these are the main set of instructions to be done with the function
int add(int a, int b)
{
    return a + b;
}
