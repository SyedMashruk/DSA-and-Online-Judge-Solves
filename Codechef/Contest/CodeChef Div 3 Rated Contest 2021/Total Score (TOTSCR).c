#include<stdio.h>
#include<string.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,k,i;
        scanf("%lld %lld",&n,&k);
        long long a[k];
        for(i=0; i<k; i++)
        {
            scanf("%lld",&a[i]);
        }
        while(n--)
        {
            long long sum;
            char b[k+1];
            sum=0;
            scanf("%s",&b);
            for(i=0 ; b[i]!='\0' ; i++)
            {
                if(b[i]=='1')
                    sum=sum+a[i];
            }
            printf("%lld\n",sum);
        }
    }
    return 0;
}
