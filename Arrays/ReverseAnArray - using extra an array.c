/* reversing elements of an array with the help of a new and extra array.*/


#include<stdio.h>
int main()
{
    int i, d, n, a[100], b[100];
    printf("Enter number of elements in array: \n");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = n-1, d = 0; i >= 0; i--, d++)
        b[d] = a[i];
    printf("Resultant array after reversing is:\n ");
    for(i= 0; i < n; i++)
        printf("%d ", b[i]);
    return 0;
}
 
 
