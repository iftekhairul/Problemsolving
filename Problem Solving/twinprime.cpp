#include<bits/stdc++.h>
using namespace std;
bool marks[20000000];
long long int twin[100007];
void seive()
{

   long long int i,j;
        marks[0]=1;
        marks[1]=1;
        for(i=2;i<=sqrt(20000000);i++)
            if(!marks[i])
        {
            for(j=i+i;j<20000000;j+=i)
            {

                marks[j]=1;
            }
        }
}
void twi()
{
    int i,j;
    j=1;
    for(i=2;j<=100007;i++)
    {
        if(marks[i]==0 && marks[i+2]==0){
        twin[j]=i;
        j++;
        }

    }
}
int main()
{
    seive();
    twi();
    long long int i,j,k,n,nu,num,m,l;


    while(scanf("%lld",&n)==1 )
    {
        printf("(%lld, %lld)\n",twin[n],twin[n]+2);

    }
    return 0;
}
