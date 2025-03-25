#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long r,b,d,max,min;
        double x;
        scanf("%lld%lld%lld",&r,&b,&d);
        if(r>b)
        {
            max=r;
            min=b;
        }
        else
        {
            max=b;
            min=r;
        }
        x=(double)max/(d+1);
        if(x>min)
            printf("NO\n");
        else
        printf("YES\n");
    }
    return 0;
}
