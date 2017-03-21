#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,j;
    char a[10];
    while(scanf("%s",&a)==1 && strcmp(a,"*"))
    {
        if(strcmp(a,"Hajj")==0)
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else{
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
        i++;
    }
    return 0;
}
