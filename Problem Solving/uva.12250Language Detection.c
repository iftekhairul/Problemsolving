#include<stdio.h>
int main()
{
    int i=1,j,k;
    char a[17];
    while(1)
    {
        scanf("%s",&a);
        fflush(stdin);
        if(strcmp(a,"#")==0)
            break;

        else if(strcmp(a,"HELLO")==0)
        {
            printf("Case %d: ENGLISH\n",i);
        }
        else if(strcmp(a,"HOLA")==0)
        {
            printf("Case %d: SPANISH\n",i);
        }
        else if(strcmp(a,"HALLO")==0)
        {
            printf("Case %d: GERMAN\n",i);
        }
        else if(strcmp(a,"BONJOUR")==0)
        {
            printf("Case %d: FRENCH\n",i);
        }
        else if(strcmp(a,"CIAO")==0)
        {
            printf("Case %d: ITALIAN\n",i);
        }
        else if(strcmp(a,"ZDRAVSTVUJTE")==0)
        {
            printf("Case %d: RUSSIAN\n",i);
        }
        else
        {
            printf("Case %d: UNKNOWN\n",i);
        }
        i++;


    }
    return 0;
}
