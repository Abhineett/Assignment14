#include<stdio.h>
void main()
{
    int a[10],sum=0;
    printf("Enter 10 numbers");
    for(int i=0;i<=9;i++){
    scanf("%d",&a[i]);
    }
    for(int i=0;i<=9;i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);
}
