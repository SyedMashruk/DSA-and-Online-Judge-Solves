#include<stdio.h>
int main()
{
    int i,j;
    char s[101];
    scanf("%s",&s);
    int z=strlen(s);
    i=0;
    while(s[i]!='\0')
    {
      j=i+1;
        while(s[j]!='\0')
        {
            if(s[i]==s[j])
            {
                z--;
                break;
            }
            j++;
        }
        i++;
    }
    if(z%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
    return 0;
}
