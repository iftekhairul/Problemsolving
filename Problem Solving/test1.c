#include<stdio.h>
int main()
{
    long long int number,i;
   while(scanf("%lld",&number)==1 && number!=0)
   {

       if(number<0)
       {
         printf("%lld = -1 x ",number);
         number=number*-1;
       }
       else
       {
         printf("%lld = ",number);
       }
       for(i=2;i*i<=number;i++)
       {
         if(number%i==0)
         {
            printf("%lld x ",i);
            number=number/i;

            i=1;
         }
       }
       printf("%lld\n",number);
   }

    return 0;
}
