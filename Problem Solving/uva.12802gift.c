#include<stdio.h>
#include<math.h>
int main()
{
    long long int num, rem,reverse, l, n,m,k, i, count ,j,rev,rem1 ,count1,z;
 while( scanf("%lld",&n)==1)
 {
     reverse=0;
     l=n*2;
     z=l;
     num=n;
     count=0;
     m=sqrt(n);
     for(j=2;j<=m;j++)
    {
        if((num%j)==0){
            count=1;
            break;
        }
    }
    while(num!=0)
    {
        rem = num % 10 ;
        reverse=reverse*10+rem;
        num/=10;
    }

    if((reverse==n && count==0) ){
            printf("%lld\n",z);
       break;
    }
     else{
        printf("%lld\n",z);
     }
 }
return 0;
}
