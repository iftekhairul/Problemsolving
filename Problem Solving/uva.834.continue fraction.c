#include<stdio.h>

    int main()
{
    int a,b,c,k;
    //freopen("in.txt","r",stdin);

    while(scanf("%d%d",&a,&b)==2)
    {
        k=0;
        while(b)
        {
            switch(k)
            {
            case 0:
                printf("[%d",a/b);
                break;
            case 1:
                printf(";%d",a/b);
                break;
            default:
                printf(",%d",a/b);
                break;
            }
            c = b;
            b = a%b;
            a = c;
            k++;
        }
        printf("]\n");
    }
    return 0;
}

