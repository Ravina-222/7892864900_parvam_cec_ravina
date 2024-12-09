#include<stdio.h>

 int main()
{
    int a,b;
    printf("enter an interger a,b");
    scanf("%d%d",&a,&b);
    if(a%2==0)
    {
        printf("integer if even\n",a,b);
    }
    else
    {
        printf("integer is odd\n",a,b);
    }
    return 0;
}