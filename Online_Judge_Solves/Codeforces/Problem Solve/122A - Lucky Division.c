#include<stdio.h>
int main()
{
    long long n,x=0,y;
    scanf("%lld",&n);
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%447==0 || n%477==0 || n%474==0)
        x=1;
    else
    {
        while(n!=0)
        {
            x=1;
            y=n%10;
            if(y!=4 && y!=7)
            {
                x=0;
                break;
            }
            n=n/10;
        }
    }
    if(x==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
