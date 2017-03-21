/*#include<stdio.h>
int main()
{
    long long int x, n,p,k=0;
    while(scanf("%lld%lld",&n,&p)==2)
    {
        x=n;
        while(n<=p)
        {
            k++;
            n=n*x;

        }
        printf("%lld\n",k);
        k=0;
    }

    return 0;
}*/
#include<stdio.h>
#include<math.h>
int main()
{
  double n,p,s;
  while(scanf("%lf %lf",&n,&p)==2)
  {
     s=pow(p,n)*2;
     printf("%.0lf\n",s);
  }
  return 0;
}
