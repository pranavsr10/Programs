
#include <stdio.h>
int main ()
{
    int *a[2],i;
    for(i=0;i<2;i++)
    {
        printf("Enter the values of array");
        scanf("%d",(a+i));

    }
    for(i=0;i<2;i++)
    {
        printf("%d\t",*(a+i));
        printf("%p\n",*(a+i));


    }
}