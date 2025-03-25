#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a,b,i,count=0;
        scanf("%d%d%d",&n,&a,&b);
        char x[n+1];
        for(i=1; i<=n; i++)
        {
          if(b==1)
            {
                for(int j=1; j<=n; j++)
                {
                    printf("a");
                }
                break;
            }
            else
            {
                count++;
                if(i>1 && i%b==1)
                    i=1;
                printf("%c",i+96);
                if(count==n)
                    break;
            }
        }
        printf("\n");
    }
    return 0;
}
