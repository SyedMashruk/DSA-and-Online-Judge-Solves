#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
        {
   double x,y,xr,yr,d,a,b,c;
   scanf("%lf%lf%lf%lf%lf",&x,&y,&xr,&yr,&d);
    a=x/xr;
    b=y/yr;
    if(a>b)
        c=b;
    else
        c=a;
    if(c<d)
        printf("NO\n");
    else
        printf("YES\n");
        }
return 0;
}
