#include<stdio.h>
void main()
{
    int a[50],n,i;
    printf("please enter total elements number=");
    scanf("%d",&n);
    printf("Enter %d number:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("reverse order of given elements is below:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }

}
