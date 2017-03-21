#include<stdio.h>
int main()
{
    int a[4000],i,j,count=1;
    for(i=0;i<7;i++){
    scanf("%d",&a[i]);
    }
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if((a[j]%a[i])!=0)
            {
                count++;
            }
        }

    }
    printf("%d",count/2);
}
