#include<stdio.h>
int main()
{
    long long n,i,j,sum,z=0,x=0,y=0;
    scanf("%lld",&n);
    long long a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        x=x+a[i]*a[i];
        y=y+a[i];
    }
    x=(n-1)*x;
    for(i=0;i<n-1;i++)
    {
        y=y-a[i];
        z=z+a[i]*(y);
    }
    z=2*z;
    sum=x-z;
    printf("%lld\n",sum);
    return 0;
}
