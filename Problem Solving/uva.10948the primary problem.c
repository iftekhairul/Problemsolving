#include<stdio.h>
#include<math.h>>
int main()
{
    long long int i,j,k,n,a[10000],count,l,b;
    bool marks[10000];

        for(i=0;i<=10000;i++)
        {
            marks[i]=0;
        }

        for(i=3;i<=sqrt(10000);i++)
            if(!marks[i])
        {
            for(j=i*i;j<=10000;j+=i)
            {

                marks[j]=1;
            }
        }
        j=1;
        a[0]=2;
        for(i=2;i<=10000;i++)
        {
            if(marks[i]==0 && (i%2)==1)
            {
                a[j]=i;

                j++;
            }

        }
    while(scanf("%lld",&n)==1 && n!=0)
    {

         count=0;
         if(n%2==0)
         {

         }
        for(k=0;a[k]<n && k<l;k++)
        {
            if((n%a[k])==0)
            {
                count++;
            }
            while((n%a[k])==0)
            {
                n=n/a[k];
            }

        }
        if(n>1)
            count++;
         printf("%lld : %lld\n",b,count);
    }
    return 0;
}
