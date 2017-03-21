#include<bits/stdc++.h>
#define pi acos(-1)
int main()
{
    double l,w,a1,a2,t,r;
    scanf("%lf",&t);
    while(t--)
    {
        scanf("%lf",&l);
        w=(l/10)*6;
        r=l/5;
        a1=l*w;
        a2=pi*r*r;
        printf("%.2lf %.2lf\n",a2,a1-a2);

    }
    return 0;
}
