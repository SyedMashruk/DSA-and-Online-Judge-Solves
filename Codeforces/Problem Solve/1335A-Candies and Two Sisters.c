#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        printf("%lld\n",(n-1)/2);
    }
    return 0;
}
