#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
        {
   long long n,m,x,y,a,b,c,p,xd,yd;
   scanf("%lld%lld%lld%lld%lld%lld",&n,&m,&x,&y,&a,&b);
     c=(n-x)+(m-y);
     xd=n-a;
     yd=m-b;
     if(xd==yd)
        p=xd;
     else
     {
         if(xd>yd)
            p=yd+(xd-yd);
         else
            p=xd+(yd-xd);
     }
     if(c<=p)
        printf("YES\n");
     else
        printf("NO\n");
        }
return 0;
}
