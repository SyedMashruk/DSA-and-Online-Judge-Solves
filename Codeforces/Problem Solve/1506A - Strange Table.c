#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long r,c,x,row,col,bingo;
        scanf("%lld%lld%lld",&r,&c,&x);
        if(x%r==0)
           {
               row=r;
               col=x/r;
           }
        else
        {
            row=x%r;
        col=(x/r)+1;
        }
        bingo=((row-1)*c)+col;
        printf("%lld\n",bingo);
    }
    return 0;
}
