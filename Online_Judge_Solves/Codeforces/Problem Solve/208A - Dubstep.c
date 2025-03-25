#include<stdio.h>
int main()
{
    char c[201];
    scanf("%s",&c);
    int count=0,i;
    i=0;
    while(c[i]!='\0')
    {
        if(c[i]=='W' && c[i+1]=='U' && c[i+2]=='B')
        {
            i=i+3;
        }
        else
        {
            printf("%c",c[i]);
            if(c[i+1]=='W' && c[i+2]=='U' && c[i+3]=='B')
                printf(" ");
            i++;
        }
    }
    printf("\n");
    return 0;
}
