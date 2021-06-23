#include<stdio.h>
int main()
{
    long long t;
scanf("%lld",&t);
    while(t--)
    {
        long long n,x=0,i,j;
        scanf("%lld",&n);
        char s[n+1];
        scanf("%s",&s);
        i=0;
        while(s[i]!='\0')
        {
            if(s[i]==s[i+1] && s[i+1]!='\0')
                s[i]='0';
                i++;
        }
         i=0;
        while(s[i]!='\0')
        {
            if(s[i]!='0')
            {
                j=i+1;
                while(s[j]!='\0')
                {
                    if(s[i]==s[j])
                    {
                        x=1;
                        break;
                    }
                    j++;
                }
            }
             if(x==1)
                break;
                i++;
        }
        if(x==1)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
