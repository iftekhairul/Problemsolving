#include<stdio.h>
int main()
{
    int i,j,k,n,m,a[10],b[10],sum;
    while(scanf("%d%d",&n,&m)==2)
    {

        if(n==0 && m==0)
        break;
    sum=0;
    i=0;
    j=0;
    while(n!=0)
    {
        a[i]=n%10;
        n=n/10;
        i++;
    }
    while(m!=0)
    {
        b[j]=m%10;
        m=m/10;
        j++;
    }
    if(i>j)
    {
       for(k=j;k<i;k++)
        b[k]=0;
       for(k=0;k<i;k++)
       {
           if(a[k]+b[k]>=10)
           {
               a[k+1]+=1;
               sum++;
           }
       }
    }

    else
        {
      for(k=i;k<j;k++)
        a[k]=0;

    for(k=0;k<j;k++)
    {
        if((a[k]+b[k])>=10)
        {
            a[k+1]+=1;
            sum++;
        }
    }
        }
    if(sum==0)
        printf("No carry operation.\n");
    else if(sum==1)
        printf("%d carry operation.\n",sum);
    else
    printf("%d carry operations.\n",sum);
    }
    return 0;
}
