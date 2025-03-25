#include<stdio.h>
int main()
{
   long long n,k,i,x,y;
    scanf("%lld %lld",&n,&k);
    x=(n+1)/2;
    if(k<=x)
    {
        y=(2*k)-1;
    }
    else if(k>x)
    {
        y=(2*(k-x));
    }
    printf("%lld\n",y);
    return 0;
}
