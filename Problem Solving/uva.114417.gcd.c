#include<stdio.h>
int gcd(int a, int b)
{
    if(b==0)
        return a;
    else return gcd(b,a%b);
}
int main()
{
int g,i,j,n;
while(scanf("%d",&n)==1 && n!=0){
g=0;
for(i=1;i<n;i++){
for(j=i+1;j<=n;j++)
{
g+=gcd(j,i);
}
}
printf("%d\n",g);
    }
    return 0;
}
