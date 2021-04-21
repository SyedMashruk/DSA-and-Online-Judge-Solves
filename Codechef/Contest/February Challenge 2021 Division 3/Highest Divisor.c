#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    for(i=10;i>=1;i--)
    {
        if(N%i==0)
        {
            printf("%d",i);
            break;
        }
        printf("\n");
    }
    return 0;
}
