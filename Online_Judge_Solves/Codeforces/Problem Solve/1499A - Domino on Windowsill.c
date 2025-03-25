#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,w1,w2,w,b,white,black;
        scanf("%lld%lld%lld%lld%lld",&n,&w1,&w2,&w,&b);
        white=(w1+w2)/2;
        black=(2*n-(w1+w2))/2;
        if(white>=w && black>=b)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
