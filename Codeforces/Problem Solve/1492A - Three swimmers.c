#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long p,a,b,c,x,y,z;
        scanf("%lld %lld %lld %lld",&p,&a,&b,&c);
        if(p%a==0 || p%b==0 || p%c==0)
            printf("0\n");
            else
                {
        x=a-(p%a);
        y=b-(p%b);
        z=c-(p%c);
        long long min = (x<y && x<z) ? x : (y<z) ? y : z;
        printf("%lld\n",min);
                }
    }
    return 0;
}
