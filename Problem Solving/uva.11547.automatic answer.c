#include<stdio.h>
int main()

{
long long int n,m,k;

    scanf("%lld",&m);
    for(k=0;k<m;k++)
    {
        scanf("%lld",&n);
        n=n*567;
        n=n/9;
        n+=7492;
        n=n*235;
        n=n/47;
        n-=498;
        n=n/10;

        if(n>=0){
        printf("%lld\n",n%10);
        }
        else{
            n=n*(-1);
            printf("%lld\n",n%10);
        }

    }
    return 0;
}
