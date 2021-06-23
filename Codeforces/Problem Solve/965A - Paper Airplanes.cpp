#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll k,n,s,p,p1;
    scanf("%lld%lld%lld%lld",&k,&n,&s,&p);
    if(n%s==0)
        p1=n/s;
    else
        p1=(n/s)+1;
   ll total_paper;
   total_paper= p1*k;
   if(total_paper%p==0)
    printf("%lld\n",total_paper/p);
   else
    printf("%lld\n",(total_paper/p)+1);
    return 0;
}
