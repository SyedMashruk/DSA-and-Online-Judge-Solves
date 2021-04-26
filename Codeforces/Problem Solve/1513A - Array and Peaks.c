#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,k,i,count=0,temp;
        scanf("%lld%lld",&n,&k);
        long long a[n];
        for(i=0; i<n; i++)
         {
             a[i]=i+1;
           }
           if(k==0)
            {
                for(i=0; i<n; i++)
                    printf("%lld ",a[i]);
            }
       else if((n%2==0 && k>n/2-1) || (n%2==1 && k>n/2))
            printf("-1");
        else
        {
                for(i=1; i<n-1; i=i+2)
                {
                    if(count<k)
                    {
                        temp=a[i];
                        a[i]=a[i+1];
                        a[i+1]=temp;
                        count++;
                    }
                }
                for(i=0; i<n; i++)
                    printf("%lld ",a[i]);
            }
            printf("\n");
        }
    return 0;
}
