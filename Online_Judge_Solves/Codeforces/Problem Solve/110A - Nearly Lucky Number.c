#include<stdio.h>
int main()
{
    long long n,a,count=0;
    scanf("%lld",&n);
    while(n!=0)
    {
        a=n%10;
        if(a==7 || a==4)
            count++;
        n=n/10;
    }
        if(count==7 || count==4)
            printf("YES\n");
        else
            printf("NO\n");
    return 0;
}
