#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value a,b,c\n");
    scanf("%d%d%d\n",&a,&b,&c);
    printf("a>b & b>c\n");
    if(a>b && a>c)
    {
        printf("a is greater than b and c\n",a,b,c);
    }
    else{
        printf("b and c are greater than a\n",a,b,c);
    }
    return 0;

}
