#include<stdio.h>
int main()
{
    long long int n,i;
    scanf("%lld",&n);
    double a[n],x=0;
    double u;
    for(i=0;i<n;i++)
    {
        scanf("%lf",&a[i]);
        x=x+a[i];
    }
   u=x/n;
   printf("%lf\n",u);
    return 0;
}
