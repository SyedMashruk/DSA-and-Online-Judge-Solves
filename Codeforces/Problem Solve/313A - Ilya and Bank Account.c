#include<stdio.h>
#include<string.h>
int main()
{
    char n[15];
    scanf("%s",&n);
    int m=strlen(n),i;
    if(n[0]=='-')
    {
        if(n[m-1]>=n[m-2])
        {
            for(i=0; i<m-1; i++)
            {
                printf("%c",n[i]);
            }
        }
        else
        {
            for(i=0; i<m; i++)
            {
                if(m==3 && n[2]=='0')
                {
                    printf("0");
                    break;
                }
                else if(i!=m-2)
                    printf("%c",n[i]);
            }
        }
    }
    else
        printf("%s",n);
    printf("\n");
    return 0;
}
