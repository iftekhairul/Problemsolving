#include<bits/stdc++.h>

bool marks[9999999];
int main()
{
    long long int i,j,k,n,coun,l,m;



marks[0]=1;
    marks[1]=1;
        for(i=2;i<=sqrt(9999999);i++)
            if(!marks[i])
        {
            for(j=i+i;j<=9999999;j+=i)
            {

                marks[j]=1;
            }
        }


    while(scanf("%lld",&n)==1 )
    {
        if(n==0)
            break;
        printf("%lld:\n",n);
         coun=0;

         m=n;
        while(n--)
        {
            k=m-n;
            if(marks[k]==0 && marks[n]==0 )
            {
                coun=1;
                break;
            }


        }
        if(coun==0)
         printf("NO WAY!\n");
         else
            printf("%lld+%lld\n",k,n);
    }
    return 0;
}
