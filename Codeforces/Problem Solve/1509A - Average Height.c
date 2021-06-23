#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long i,n;
        scanf("%lld",&n);
        long long a[n],e[n],ev=n-1,od=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]%2==0)
            {
                  e[ev]=a[i];
                  ev--;
            }
            else
            {
                e[od]=a[i];
                od++;
            }
        }
        for(i=0;i<n;i++)
            printf("%lld ",e[i]);
        printf("\n");
    }
}
