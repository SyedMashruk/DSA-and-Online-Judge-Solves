#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        int a[n];
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<n; i++)
        {
            if(i==0 && a[0]!=a[1] && a[0]!=a[2])
            {
                printf("%d\n",i+1);
                break;
            }
            else if(i==n-1 && a[i]!=a[i-1] && a[i]!=a[i-2] )
            {
                printf("%d\n",i+1);
                break;
            }
            else if(i>0 && i<n-1 && a[i]!=a[i-1] && a[i]!=a[i+1])
            {
                printf("%d\n",i+1);
                break;
            }
        }
    }
    return 0;
}
