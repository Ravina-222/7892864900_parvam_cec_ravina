//summation of numbers
#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i;

    }
     printf("the summation of first %dnumber is:%d\n",n,sum);
     return 0;
}