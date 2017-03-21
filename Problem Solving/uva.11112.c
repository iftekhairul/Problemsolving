#include<stdio.h>
int main()
{
    long long a,b,n,i;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld%lld",&a,&b);
        if(a==b)
            printf("=\n");
        if(a>b)
            printf(">\n");
        if(a<b)
            printf("<\n");
    }
    return 0;
}
