#include<stdio.h>
int main()
{
    long long a,b,c,x;
    scanf("%lld%lld%lld",&a,&b,&c);
    x=a*a+b*b;
    if(x<(c*c))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
