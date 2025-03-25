#include<stdio.h>
int main()
{
    long long n,i,max,count;
    scanf("%lld",&n);
    long long a[n],b[n],c[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld%lld",&a[i],&b[i]);
        c[i]=a[i]+b[i];
    }
    for(i=1; i<n; i++)
    {
        if(a[i]<a[0])
        {
            a[0]=a[i];
            count=i;
        }
    }
    for(i=1; i<n; i++)
    {
        if(b[i]<b[0] && i!=count)
        {
            b[0]=b[i];
        }
    }
    if(a[0]>b[0])
        max=a[0];
    else
        max=b[0];
    for(i=0; i<n; i++)
    {
        if(c[i]<max)
            max=c[i];
    }
    printf("%lld\n",max);
    return 0;
}
