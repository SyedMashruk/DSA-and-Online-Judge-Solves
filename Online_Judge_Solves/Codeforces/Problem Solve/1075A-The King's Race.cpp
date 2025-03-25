#include<iostream>
#define ll long long
#include<algorithm>
using namespace std;
int main()
{
    ll n,x,y,w,b,maximum,minimum;
    cin>>n>>x>>y;
   maximum=max(x,y);
   minimum=min(x,y);
   w=maximum-1;
   b=n-minimum;
   if(w<=b)
    cout<<"White\n";
   else
    cout<<"Black\n";
    return 0;
}
