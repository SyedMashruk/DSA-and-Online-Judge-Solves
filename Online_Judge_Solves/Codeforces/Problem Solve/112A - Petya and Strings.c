#include<stdio.h>
int main()
{
    char a[101],b[101];
    int i,z;
    scanf("%s",&a);
    scanf("%s",&b);
    i=0;
    while(a[i]!='\0')
    {
        if(a[i]>90)
            a[i]=a[i]-32;
        if(b[i]>90)
            b[i]=b[i]-32;
        i++;
    }
    z=strcmp(a,b);
    printf("%d\n",z);
    return 0;
}

