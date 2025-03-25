#include<stdio.h>
int main()
{
    long long t,temp,rev=0,n;
    scanf("%lld",&t);
    temp=t;
    while(temp!=0)
    {
        n=temp%10;
        rev=rev*10+n;
        temp=temp/10;
    }
    if(t==rev)
        printf("Yes\n");
    else if(t%10!=0)
        printf("No\n");
    else
    {
        while(t%10==0)
        {
            t=t/10;
            temp=t;
        }
        rev=0;
        while(temp!=0)
        {
            n=temp%10;
            rev=rev*10+n;
            temp=temp/10;
        }
        if(t==rev)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
