#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    while(n!=0)
    {
        if(n>=5)
        {
            n=n-5;
            count++;
        }
        else if(n>=4)
        {
            n=n-4;
            count++;
        }
        else if(n>=3)
        {
            n=n-3;
            count++;
        }
        else if(n>=2)
        {
            n=n-2;
            count++;
        }
        else if(n>=1)
        {
            n=n-1;
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
