#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000];
    long long i,l,j,k,x=0;
    scanf("%s",&a);
    strlwr(a);
    l=strlen(a);
    j=0;
    for(i=0;i<l;i++)
    {
        if(a[i]!='A' && a[i]!='E' && a[i]!='I' && a[i]!='O' && a[i]!='U' && a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' && a[i]!='y' && a[i]!='Y')
        {
            b[j]='.';
            b[j+1]=a[i];
            x+=2;
            j+=2;
        }
    }
for(i=0;i<x;i++)
    printf("%c",b[i]);
printf("\n");

    return 0;
}
