#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long m,h,x;
        scanf("%lld %lld",&m,&h);
        x= m/(h*h);
        if(x<=18)
            printf("1\n");
        else if(x<=24)
            printf("2\n");
        else if(x<=29)
            printf("3\n");
        else if(x>=30)
            printf("4\n");
    }
    return 0;
}
