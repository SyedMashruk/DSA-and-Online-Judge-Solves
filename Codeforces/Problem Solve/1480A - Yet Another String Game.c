#include<stdio.h>
int main()
{
 int t,i;
 scanf("%d",&t);
 for(i=0;i<t;i++)
 {
     char s[50];
     int j;
     scanf("%s",&s);
     for(j=0;s[j]!='\0';j++)
     {
         if(j==0 || j%2==0)
         {
             if(s[j]==97)
                printf("b");
             else
                printf("a");
         }
         else
         {
             if(s[j]==122)
                printf("y");
             else
                printf("z");
         }
     }
     printf("\n");
 }
    return 0;
}
