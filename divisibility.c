/* #include <stdio.h>
int main()
{
    int i;
    printf("hello\n");
    printf("enter the number=\n");
    scanf("%d", &i);
    if (i % 97 == 0)
    {
        printf("yes, divisible");
    }
    else
    {
        printf("not divisible");
    }

    return 0;
}
    */
// above code will only check if the number given by user is divisible by 97 or not.

// below is advanced code, asks the user both things

#include <stdio.h>
int main()
{
    int a, b;
    printf("a is dividend\tb is divisor\n");

    printf("enter the dividend\n");
    scanf("%d", &a);
    printf("a=%d\n", a);
    printf("enter the divisor\n");
    scanf("%d", &b);
    printf("b=%d\n", b);
    if (a % b == 0)
    {
        printf("a is divisible by b\n");
    }
    else
    {
        printf("a is not divisible by b\n");
    }
    printf("program ended");
    return 0;
}
