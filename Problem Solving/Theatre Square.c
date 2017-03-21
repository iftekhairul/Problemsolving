#include<stdio.h>
int main()
{
    long long int a,b,c,res,ans,res2;
    scanf("%I64d%I64d%I64d",&a,&b,&c);

if(a>0 && b>0){
        if(a>c){
        res=a/c;
        if(a%c>0)
            res+=1;
        }
        else if(a<=c)
            res=1;
        if(b>c){
        b=b-c;
        res2=b/c;
        if(b%c>0)
        {
            res2+=1;
        }
        res2=res*res2;
        }
        else if(b<=c)
            res2=0;
        ans=res+res2;
        printf("%I64d\n",ans);
}
else
{
    ans=-1;
    printf("%I64d\n",ans);
}
    return 0;
}
