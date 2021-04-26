#include<stdio.h>
int main()
{
    long long n,i,count,x,j;
    scanf("%lld",&n);
    long long a[n],b[n];
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    for(i=0;i<n;i++)
        scanf("%lld",&b[i]);
        x=a[0];
        count=b[0]-a[0]+1;
    long long c[count];
    for(i=0;i<count;i++)
    {
        c[i]=x;
        x++;
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<count;j++)
        {
            if(c[j]<a[i] || c[j]>b[i])
                c[j]=-1;
        }
    }
    x=0;
    for(i=0;i<count;i++)
    {
        if(c[i]>=0)
            x++;
    }
    printf("%lld\n",x);
    return 0;
}
