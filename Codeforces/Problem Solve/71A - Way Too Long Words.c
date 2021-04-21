#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        char s[100];
        int len,j,count=0;
        scanf("%s",&s);
        len = strlen(s);
        if(len>10)
            {
        for(j=1; j<=len; j++)
        {
            if(j==1)
                printf("%c",s[0]);
            else if(j==len)
                printf("%d%c\n",count,s[len-1]);
            else
                count++;
        }
            }
            else
                printf("%s\n",s);
    }
    return 0;
}
