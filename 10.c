#include<stdio.h>
void main()
{
    int a[5],b[5],i;
    printf("enter elements");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("copy elements for another array is:\n");
    for(i=0;i<=4;i++)
    {
        b[i]=a[i];
        printf("%d\n",b[i]);
    }
}
