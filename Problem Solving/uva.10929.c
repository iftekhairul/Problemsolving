#include<stdio.h>
int main()
{
long n;
while(scanf("%d",&n)==1)
{
if(n==0)
break;
printf(n % 11 ? "%d is not a multiple of 11.\n" : "%d is  a multiple of 11.\n", n);
}
return 0;

}
