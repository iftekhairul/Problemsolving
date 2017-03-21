#include<bits\stdc++.h>
using namespace std;
int main()
{
    double c,f,c1;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf",&c,&f);
        c1=f/1.8;
        c=c+c1;
        printf("Case %d: %.2lf\n",i,c);

    }
    return 0;
}
