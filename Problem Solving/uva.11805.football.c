#include<stdio.h>
int main()
{
    int t,n,k,p,x,y=1;
    scanf("%d",&t);
    while(y!=t+1)
    {
        scanf("%d%d%d",&n,&k,&p);

            x=(((k+p)-1)%n)+1;
            printf("Case %d: %d\n",y,x);

        y++;
    }
    return 0;
}
