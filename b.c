#include<stdio.h>
void main()
{
    int a[10],sum=0;
    float avg;
    printf("Enter 10 numbers");
    for(int i=0;i<=9;i++){
    scanf("%d",&a[i]);
    }
    for(int i=0;i<=9;i++)
    {
        sum+=a[i];
    }
    avg=sum/10;
    printf("avg is %f",avg);
}
