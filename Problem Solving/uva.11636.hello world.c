#include<stdio.h>
int main()
{
    int i=1,j,a,count;
    while((scanf("%d",&a))==1)
    {
        if(a<0)
            break;
        count=1;

        j=1;
        while(j<a)
        {
            j=j+j;
            count++;
        }

        printf("Case %d: %d\n",i,count-1);
        i++;

    }
    return 0;

}
