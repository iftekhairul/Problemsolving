#include<stdio.h>
int main()
{
   long long count=1;
   char ch;
   while(scanf("%c",&ch)==1)
   {
        if(ch=='"'){
       if( count%2==1){
        printf("``");

       }
       else if( count%2==0)
       {

        printf("''");

       }
       count++;
        }
       else if(ch!='"')
        printf("%c",ch);
   }
   return 0;

}
