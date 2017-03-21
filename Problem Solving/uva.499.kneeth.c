#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,a[26],len,n,max,b[26];
    char s[1005],c;
    scanf("%d",&n);
    getchar();
    while(gets(s))
    {
        for(k=0;k<26;k++)
            a[k]=0;
        for(k=0;k<26;k++)
            b[k]=0;


        len=strlen(s);
        for(j=0;j<len;j++)
        {
            if('A'<=s[j]&& s[j]<='Z')
            {
                b[s[j]-'A']++;
            }
            else if('a'<=s[j] && s[j]<='z')
            {
                a[s[j]-'a']++;
            }
        }
        max=0;
        for(k=0;k<26;k++)
        {
            if(max<b[k])
                max=b[k];
        }
        for(k=0;k<26;k++)
        {
            if(max<a[k])
                max=a[k];
        }

        for(k=0;k<26;k++)
        {
            if(max==b[k])
            {
                c='A'+k;
                printf("%c",c);
            }
        }

        for(k=0;k<26;k++)
        {
            if(max==a[k])
            {
                c='a'+k;
                printf("%c",c);
            }
        }
        printf(" %d\n",max);

    }
    return 0;
}
