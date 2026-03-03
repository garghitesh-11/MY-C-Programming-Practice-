#include <stdio.h>
int main()
{
    int i, n, a;
    printf("enter the number =\n");
    scanf("%d", &n);
    printf("we will write the table of %d\n", n);
    for (i = 0; i < 21; i++)
    {
        a = n * i;
        printf("%d*%d=%d\n", n, i, a);
    }
    return 0;
}