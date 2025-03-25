#include<stdio.h>
int main()
{
    long long t,j=1;
    scanf("%lld",&t);
    while(t--)
    {
        long long a,b,x,y;
        scanf("%lld%lld",&a,&b);
        x=(b-a+1)*2;
        y=x/3;
        if(((a+1)%3==0 && (b+1)%3==0) || (a%3==0 && b%3==0) || ((a+1)%3==0 && b%3==0))
            printf("Case %lld: %lld\n",j,y+1);
        else
            printf("Case %lld: %lld\n",j,y);
        j++;
    }
    return 0;
}
