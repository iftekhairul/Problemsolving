#include<stdio.h>
int main()
{
    int a,b,r,n,i,x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        x=a/3;
        y=b/3;
        r=x*y;
        printf("%d\n",r);
    }
    return 0;
}
