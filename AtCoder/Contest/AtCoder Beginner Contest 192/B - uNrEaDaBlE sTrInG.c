#include<stdio.h>
int main()
{
  char s[1001];
  int i,count=0,n;
  scanf("%s",&s);
  n=strlen(s);
 for(i=0;i<n;i+=2)
 {
     if(s[i]<=90 || (s[i]>90 && s[i+1]>90))
        count++;
 }
 if(count==0)
    printf("Yes\n");
 else
    printf("No\n");
    return 0;
}
