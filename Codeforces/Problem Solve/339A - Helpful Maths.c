#include<stdio.h>
int main()
{
    int i,j,k,z;
    char s[101],temp;
    scanf("%s",&s);
    z=strlen(s);
    for(i=0;i<z-2;i=i+2)
    {
     for(j=i+2;j<z;j=j+2)
     {
         if(s[j]<s[i])
         {
             temp=s[j];
             s[j]=s[i];
             s[i]=temp;
         }
     }
    }
    printf("%s\n",s);
    return 0;
}
