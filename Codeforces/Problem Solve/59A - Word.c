#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    scanf("%s",&a);
    int l=0,u=0,i;
    i=0;
    while(a[i]!='\0')
    {
        if(a[i]>90)
            l++;
        else if(a[i]<=90)
            u++;
        i++;
    }
    if(u>l)
    {
        i=0;
        while(a[i]!='\0')
        {
            if(a[i]>90)
                a[i]=a[i]-32;
            i++;
        }
    }
   else if(l>=u)
    {
        i=0;
        while(a[i]!='\0')
        {
            if(a[i]<97)
                a[i]=a[i]+32;
            i++;
        }
    }
      printf("%s\n",a);
    return 0;
}
