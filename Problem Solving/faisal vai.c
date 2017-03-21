#include<stdio.h>
int main()
{
    int n,a,v=1,p,t,z,u=1,y=1,j,m,d,i,sum,b,e,q,w;
    scanf("%d",&a);

    while(v<=a)
    {
        z=0;
  t=0;


        scanf("%d%d%d",&n,&p,&q);


        for(i=1;i<=n;i++)

           {

            scanf("%d",&d);
            m=0;
    if(d<=p && d<=q)
            {

            j=d;
             t=t+j;
     if(t<=q)
          {
              m=m+i;
              z=m;
          }

            }


           }


printf("Case %d: %d \n",y,z);

v++;
y++;

    }
    return 0;

}
