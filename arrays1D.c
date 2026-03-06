// 1D Array
// #include <stdio.h>
// int main()
// {
//     int i;
//     int array[5] = {3, 2, 5, 7, 9};
//     for (i = 0; i < 5; i++)
//     {
//         printf("the elements are=%d\n", array[i]);
//     }

//     return 0;
// }

// 1D Array (now we will input the array elements from user)
// 1st question --> why 2 loops here?
// ans.. 1st loop is for user input
// 2nd for printing it.
#include <stdio.h>
int main()
{
    int i, a[3];
    printf("enter the elements of array named a=\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]); // i did mistake here, i written a[2] instead of a[i]
    }

    for (i = 0; i <= 2; i++) // here <=2 and <3 will work same
    {
        printf("elements are =%d\n", a[i]);
    }
    printf("ended");
    return 0;
}
// 1D arrays done