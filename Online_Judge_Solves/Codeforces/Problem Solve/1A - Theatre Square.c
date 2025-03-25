#include<stdio.h>
int main()
{
        long long n,m,a,x,y;
        scanf("%lld%lld%lld",&n,&m,&a);
        if(n<a && m<a)
            printf("1\n");
        else if(n<a && m>=a)
        {
            if(m%a==0)
                printf("%lld\n",m/a);
            else
                printf("%lld",(m/a)+1);
        }
        else if(m<a && n>=a)
        {
            if(n%a==0)
                printf("%lld\n",n/a);
            else
                printf("%lld",(n/a)+1);
        }
        else if(n%a==0 && m%a==0)
            printf("%lld\n",(n*m)/(a*a));
        else if(n%a!=0 && m%a!=0)
        {
            x=m/a;
            y=n/a;
            printf("%lld\n",(x*y)+x+y+1);
        }
        else if(m%a==0 || n%a==0)
        {
            x=m/a;
            y=n/a;
            if(m%a==0)
                printf("%lld\n",(x*y)+x);
            else if(n%a==0)
                printf("%lld\n",(x*y)+y);
        }
    return 0;
}
