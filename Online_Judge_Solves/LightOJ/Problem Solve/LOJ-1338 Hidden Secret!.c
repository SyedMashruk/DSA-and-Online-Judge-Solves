#include<stdio.h>
#include<string.h>
int main()
{
    long long t,i=1;
    scanf("%lld",&t);
    getchar();
    while(t--)
    {
        char a[150],b[150],ac[150],bc[150];
        long long j,k,x=0,y=0,z=0;
       gets(a);
       gets(b);
        j=0;
        while(a[j]!='\0')
        {
            if(a[j]>='A' && a[j]<='Z' && a[j]!=' ')
            a[j]=a[j]+32;
            j++;
        }
         k=0;
            while(b[k]!='\0')
            {
                if(b[k]>='A' && b[k]<='Z' && b[k]!=' ')
            b[k]=b[k]+32;
            k++;
            }
        strcpy(bc,b);
        strcpy(ac,a);
        j=0;
        while(a[j]!='\0')
        {
            k=0;
            while(b[k]!='\0')
            {
                x=0;
                if(b[k]==a[j] && a[j]!=' ')
                {
                    x=1;
                    b[k]='1';
                    break;
                }
                k++;
            }
            if(a[j]!=' ' && x==0)
            {
                y=1;
                break;
            }
            j++;
        }
        x=0;
        j=0;
        while(bc[j]!='\0')
        {
            k=0;
            while(ac[k]!='\0')
            {
                x=0;
                if(ac[k]==bc[j] && bc[j]!=' ')
                {
                    x=1;
                    ac[k]='1';
                    break;
                }
                k++;
            }
            if(bc[j]!=' ' && x==0)
            {
                z=1;
                break;
            }
            j++;
        }
        if(y==1 && z==1)
            printf("Case %lld: No\n",i);
        else
            printf("Case %lld: Yes\n",i);
        i++;
    }
    return 0;

    }

