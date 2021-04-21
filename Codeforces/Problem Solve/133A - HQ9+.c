#include<stdio.h>
int main()
{
    char s[101];
    scanf("%s",&s);
    int i,q=0;
    i=0;
    while(s[i]!='\0')
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            q++;
            break;
        }
        i++;
    }
    if(q>0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
