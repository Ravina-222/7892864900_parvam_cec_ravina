//sumation of no recursion
#include<stdio.h>
long sum(int);
int main()
{
    int n=0;
    scanf("%d"&n);
    printf("sumation of %d is %ld",n,sum(n));
}
long sum (int no)
{
    if(no<=0) return 0;
    if(n==1) return 1;
    return no+sum(no-1);
}