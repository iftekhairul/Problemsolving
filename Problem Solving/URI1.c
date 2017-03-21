#include<stdio.h>
int main()
{
    int a,b,n;
    while((scanf("%d%d",&a,&b))==2)
    {
        n=a-b;
        printf("X = %d",n);
    }
    return 0;
}
