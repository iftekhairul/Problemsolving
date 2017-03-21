#include<stdio.h>
#include<math.h>
int main()
{
    int n,j=1;
    float u,v,t,s,a,time,y,z;
    while(scanf("%d",&n)==1 )
    {
        if(n==0)
            break;

        scanf("%f%f%f",&u,&v,&t);

    if(n==1){
        a=(v-u)/t;
        s=(u*t)+(.5*a*t*t);
        printf("Case %d: %.3f %.3f\n",j,s,a);
        }

   else if(n==2){
        time=(v-u)/t;
        s=(u*time)+(.5*t*time*time);
        printf("Case %d: %.3f %.3f\n",j,s,time);
    }
    else if(n==3){
        y=(u*u)+(2*v*t);
        z= sqrt(y);
        time=(z-u)/v;
        printf("Case %d: %.3f %.3f\n",j,z,time);
    }
   else if(n==4){
        y=(u*u)-(2*v*t);
        z= sqrt(y);
        time=(u-z)/v;
        printf("Case %d: %.3f %.3f\n",j,z,time);
    }
    j++;
    }
    return 0;
}
