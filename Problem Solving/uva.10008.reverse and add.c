#include<stdio.h>
int main()
{
    long long a,b[100],i,j,c,d,e,f,n,k;
    scanf("%lld",&n);
    for(k=1;k<=n;k++)
    {
    f=1;
    scanf("%lld",&a);
    long long count=0;
    while(f!=0)
    {

    i=0;
    j=0;

    d=a;

    while(a!=0)
    {
    b[i]=a%10;
    a=a/10;

    i++;
    }
    c=0;
    while(i--)
    {
        c=10*c;
        c=c+b[j];
        j++;
    }
    if(d==c)
    {
        f=0;
    }
    e=d+c;
    a=e;
    count++;
    }
    printf("%lld %lld\n",count-1,d);
    }
    return 0;
}
