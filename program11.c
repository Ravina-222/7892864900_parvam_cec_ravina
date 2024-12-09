//summation of numbers
#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter the number of integers you want to sum:");
    scanf("%d",&n);
    printf("Enter%d numbers\n",n);
        for(int i=1;i<=n;i++)
        {
        printf("number%d:",i);
        scanf("%d",&number);
        sum+=number;
        }
    printf("summation of entered number is:%d\n",sum);
    return 0;

}