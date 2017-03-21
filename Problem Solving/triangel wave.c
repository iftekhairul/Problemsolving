#include<stdio.h>
int main()
{
    int i,j,k,a,b,c,l;
    while(scanf("%d",&a)==1){
    for(l=1;l<=a;l++)
    {
        scanf("%d",&c);
        scanf("%d",&b);
        for(i=1;i<=b;i++)
        {

            for(j=1;j<=c;j++)
            {
                for(k=1;k<=j;k++)
                {
                printf("%d",j);
                }
                printf("\n");
            }
            for(j=c-1;j>=1;j--)
            {
                for(k=1;k<=j;k++)
                {
                printf("%d",j);
                }
                printf("\n");
            }
            if(l!=a || i!=b)
            printf("\n");
        }
    }
    }
    return 0;
}
