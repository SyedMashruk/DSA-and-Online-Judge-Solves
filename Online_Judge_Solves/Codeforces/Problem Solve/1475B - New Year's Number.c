#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
         long long a,n,b=0;
         scanf("%lld",&a);
         if(a<2020)
            printf("NO\n");
         else if(a%2020==0 || a%2021==0)
            printf("YES\n");
         else
         {
             n=a;
             while(n>=2020)
             {
                 n=n-2021;
                 if(n%2020==0)
                 {
                     b++;
                     break;
                 }
             }
             if(b==1)
                printf("YES\n");
             else printf("NO\n");
         }
    }
    return 0;
}
