include<stdio.h>
#include<math.h>
double a[1000001];
void hulu()
{
    long long i;
    a[1]=0;
    a[0]=0;
    for(i=2; i<=1000001; i++)
        a[i]=log10(i)+a[i-1];
}
int main()
{
    long long t,j=1;
    scanf("%lld",&t);
    hulu();
    while(t--)
    {
        long long n,b;
        double sum;
        scanf("%lld%lld",&n,&b);
        sum=a[n]/log10(b);
        printf("Case %lld: %lld\n",j,(int)sum+1);
        j++;
    }
    return 0;
}
