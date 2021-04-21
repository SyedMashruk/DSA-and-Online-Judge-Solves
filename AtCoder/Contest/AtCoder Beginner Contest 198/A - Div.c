#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    if(t==0 || t==1)
        printf("0\n");
    else
    {
        printf("%lld",t-1);
    }
return 0;
}
