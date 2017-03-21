#include<stdio.h>
#include<string.h>
int main()
{
    int j,b,m,a,len,c,d,e;
    char str[10000];
    scanf("%d",&m);
    for(j=0;j<m;j++)
    {
       scanf("%s",&str);

    len=strlen(str);
   if((strcmp(str,"4")==0) ||(strcmp(str,"1")==0)|| (strcmp(str,"78")==0))
        {
            printf("+\n");
        }
        else if(str[len-1]=='5' && str[len-2]=='3')
        {
            printf("-\n");
        }
        else if(str[0]=='9' && str[len-1]=='4')
        {
            printf("*\n");
        }
        else if(str[0]=='1' && str[1]=='9' && str[2]=='0')
        {
            printf("?\n");
        }

    }
    return 0;
}
