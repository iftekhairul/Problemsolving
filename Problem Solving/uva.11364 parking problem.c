#include<stdio.h>
int main()
{
    int i,j,res,n,m,a[110],mi,ma;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[j]);
        }
        mi=a[0];
        ma=a[0];
        for(j=0;j<m;j++)
        {
            if(mi>a[j])
            {
                mi=a[j];
            }
            if(ma<a[j])
            {
                ma=a[j];
            }
        }
        res=(ma-mi)*2;
        printf("%d\n",res);
    }
return 0;
}
