#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j=0,k,x,z,y,l;
    double a[45],m;
    scanf("%d",&n);
    while(j<n)
    {
       for(i=0;i<40;i++)
       {
           scanf("%lf",&a[i]);
           if(a[i]==0)
            break;
       }

       for(k=0;k<i-1;k++)
       {
           for(z=0;z<i-1;z++)
           {
               if(a[z]>a[z+1])
               {
                   m=a[z];
                   a[z]=a[z+1];
                   a[z+1]=m;
               }
           }
       }


    y=1,x=0;
      for(l=i-1;l>=0;l--)
      {
         a[l]=pow(a[l],y)*2;
         x=x+a[l];

         y++;
      }

       if(x>5000000)
        {
           printf("Too expensive\n");
        }
        else

            printf("%d\n",x);

       j++;
    }
    return 0;
}
