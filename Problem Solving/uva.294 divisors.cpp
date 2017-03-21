#include<bits/stdc++.h>
using namespace std;
bool a[100000];

void seive()
{
    int i,j;
    a[0]=1;
    a[1]=1;
    for(i=2;i<=sqrt(100000);i++)
    {
        if(!a[i]){
        for(j=i+i,j<100000;j+=i)
        {
            a[j]=1;
        }
        }
    }
}
int main()
{
    seive();
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d")
    }
}

