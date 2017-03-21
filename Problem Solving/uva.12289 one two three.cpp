#include<bits/stdc++.h>
int main()
{
    int i;
    char a[6];
    scanf("%d",&i);
    while(i--)
    {
        scanf("%s",&a);
        if(strcmp(a,"one")==0 || (a[0]=='o'&&a[1]=='n')|| (a[0]=='o'&&a[2]=='e') || (a[1]=='n'&&a[2]=='e'))
           {
               printf("1\n");
           }
        else if(strcmp(a,"two")==0 || (a[0]=='t' && a[1]=='w')|| (a[0]=='t' && a[2]=='o')|| (a[1]=='w' && a[2]=='o'))
        printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}
