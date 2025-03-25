#include<iostream>
#define ll long long
int main()
{
    ll n,s,k,r,result;
    scanf("%lld%lld",&n,&k);
    s=n/2;
    if(s%(k+1)==0)
    {
        s=s/(k+1);
        k=s*k;
        result=(n-(s+k));
    }
    else
    {
        r=s%(k+1);
        s=s-r;
        s=s/(k+1);
        k=s*k;
        result=n-(s+k);
    }
     printf("%lld %lld %lld\n",s,k,result);
    return 0;
}
